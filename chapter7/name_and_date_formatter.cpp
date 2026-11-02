#include <iostream>
#include <fstream>

using namespace std;

string monthName(int month) {
    std::string monthName;

    switch (month) {
        case 1:  monthName = "January"; break;
        case 2:  monthName = "February"; break;
        case 3:  monthName = "March"; break;
        case 4:  monthName = "April"; break;
        case 5:  monthName = "May"; break;
        case 6:  monthName = "June"; break;
        case 7:  monthName = "July"; break;
        case 8:  monthName = "August"; break;
        case 9:  monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
        default: monthName = "Invalid month"; break;
    }

    return monthName;
}

int main() {

    string inFile;
    cout << "Enter filename: ";
    cin >> inFile;

    ifstream inData;
    inData.open(inFile);

    int previousIndex, commaIndex;
    string line;
    string firstName, lastName, initialDate;
    while(getline(inData, line)) {
        commaIndex = line.find(",", 0);
        lastName = line.substr(0, commaIndex);
    
        previousIndex = commaIndex;
        commaIndex = line.find(",", commaIndex + 1);
        firstName = line.substr(previousIndex + 1, commaIndex - previousIndex);

        int firstNonWhitespace = firstName.find_first_not_of(" ");
        firstName = firstName.substr(firstNonWhitespace, firstName.find_last_not_of(" ") - firstNonWhitespace);

        initialDate = line.substr(commaIndex + 1, line.length());
        
        int monthIndex = initialDate.find("/", 0);
        string monthStr = monthName(stoi(initialDate.substr(0, monthIndex)));
        initialDate.erase(0, monthIndex + 1);

        int dayIndex = initialDate.find("/", 0);
        string dayStr = initialDate.substr(0, dayIndex);
        initialDate.erase(0, dayIndex + 1);

        string year = initialDate;

        cout << firstName << " " << lastName << ", " << monthStr << " " << dayStr << ", " << year << endl;
    }

    return 0;
}