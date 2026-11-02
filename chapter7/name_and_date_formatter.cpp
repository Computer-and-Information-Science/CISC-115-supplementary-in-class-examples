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
    string firstName, lastName, date;
    while(getline(inData, line)) {
        commaIndex = line.find(",", 0);
        lastName = line.substr(0, commaIndex);
    
        previousIndex = commaIndex;
        commaIndex = line.find(",", commaIndex + 1);
        firstName = line.substr(previousIndex + 1, commaIndex - previousIndex);

        int firstNonWhitespace = firstName.find_first_not_of(" ");
        firstName = firstName.substr(firstNonWhitespace, firstName.find_last_not_of(" ") - firstNonWhitespace);

        // parse the date
        date = line.substr(commaIndex + 1, line.length());
        
        int slashIndex = date.find("/", 0);
        // stoi converts a string representation of a number to an int (e.g., "12" into the int 12).
        string monthStr = monthName(stoi(date.substr(0, slashIndex)));

        int slashIndex2 = date.find("/", slashIndex + 1);
        string dayStr = date.substr(slashIndex + 1, slashIndex2 - slashIndex - 1);

        string year = date.substr(slashIndex2 + 1, 4);

        cout << firstName << " " << lastName << ", " << monthStr << " " << dayStr << ", " << year << endl;
    }

    return 0;
}