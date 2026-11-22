#include <iostream>
#include "clock.h"

using namespace std;

int main() 
{
    Clock clocks[5];
    for(Clock c: clocks) {
        cout << c.getUid() << endl;
    }
    return 0;
}

