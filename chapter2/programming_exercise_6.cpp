// include statement(s)
// using namespace statement
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // variable declaration
string name;
double studyHours;

    // executable statements
cout << "What is your name? ";
cin >> name;

cout << "How many hours do you study per week? ";
cin >> studyHours;


    // return statement
cout << "Hello, " << name << "! \n On Saturday, you need to study "
 << studyHours << " hours for the exam." << endl;
}
