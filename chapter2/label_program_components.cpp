/*
* label lines as either 
   1. preprocessor directives
   2. declarations
   3. function headers
   4. statements

* what would the output be if the three variables were declared int?
*/ 

#include <iostream>
using namespace std;

int main()
{
    double base, height, triangleArea;

    base = 10.0;
    height = 4.0;
    triangleArea = 0.5 * base * height;

    cout << "Area = " << triangleArea << endl;

    return 0;
}