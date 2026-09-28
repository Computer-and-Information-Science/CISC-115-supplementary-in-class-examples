#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 
  
    int i, i2;
    char c, c2;
    float f, f2;

    cout << "Enter input: ";
    // input: 
    //  1 2.3a4.5
    //  6.7

    // input
    i = cin.peek();
    cin >> i2;

    cin.get(c);
    cin.get(c2);
    cin.putback(c2);

    cin >> f;
    cin >> f2;

    cin.clear();
    cin.ignore(100, '\n');

    cin >> f2;

    // output
    cout << fixed << setprecision(2);

    cout << "i = " << i << endl;
    cout << "i2 = " << i2 << endl;
    cout << "f = " << f << endl;
    cout << "f2 = " << f2 << endl;

    cout << right;
    cout << setfill('=');

    cout << "c" << setw(3) << c << endl;
    cout << "c2" << setw(3) << c2 << endl;

    return 0;
}