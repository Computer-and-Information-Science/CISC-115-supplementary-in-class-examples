#include<iostream>
using namespace std;

// write and invoke a function to reverse an array
// [5, 4, 3, 2, 1] -> [1, 2, 3, 4, 5]

void printArray(int list[], int size) {
    for(int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main() {
    int SIZE = 5;
    int list[] = {5, 4, 3, 2, 1};

    printArray(list, SIZE);

    return 0;
}