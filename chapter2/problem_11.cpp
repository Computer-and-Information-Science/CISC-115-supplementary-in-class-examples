#include <iostream>
#include <string>

using namespace std;

int main()
{
    string g_capacity;
    string mpg;
    

cout << "What is your gallon capacity? ";
cin >> g_capacity;

cout << "What is your Miles per Gallon (MPG)? ";
cin >> mpg;

string result = g_capacity + mpg;

cout << "The total miles between refuels: " << result << "." << endl;

}