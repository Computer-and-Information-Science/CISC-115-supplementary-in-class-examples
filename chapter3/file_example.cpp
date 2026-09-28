#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    int x = 0, y = 0;

    inFile.open("input.txt");
    outFile.open("output.txt");
    
    inFile >> x >> y;
    cout << x << " " << y << endl;

    outFile << x * y;

    outFile.close();

    return 0;
}