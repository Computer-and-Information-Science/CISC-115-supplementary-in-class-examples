#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // generate a random number from 1-100
    srand(time(0));
    int num = (rand() % 100) + 1;

    // Prompt the user to guess a number from 1-100.
    // Output either too high/too low/correct, 
    // terminating the program when they win.


    return 0;
}