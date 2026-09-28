/*
* label lines as either 
   1. preprocessor directives
   2. declarations
   3. function headers
   4. statements

* what would the output be if the three variables were declared int?
*/ 

#include <iostream> // Preprocessor directive
using namespace std; // function headers

int main() // function header
{
    int base, height, triangleArea; //declaration

    base = 10.0; //statement lines 18 to 20
    height = 4.0;
    triangleArea = 0.5 * base * height;

    cout << "Area = " << triangleArea << endl; // Output string

    return 0;
}