#include <iostream>

using namespace std;

int main() {
    int grade1, grade2, grade3, grade4, grade5;
    cout << "Enter 5 grades: ";
    cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;

    int average = (grade1 / 5) + (grade2 / 5) + (grade3 / 5) + (grade4 / 5) + (grade5 / 5);
    
    cout << average << endl;

    return 0;
}