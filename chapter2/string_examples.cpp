#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello, World!";
    cout << s << endl;
    
    cout << "---" << endl;
    cout << "String\twith\ttabs" << endl;
    
    cout << "---" << endl;
    cout<< "String\nwith\nnewlines\n" << endl;
    
    cout << "---" << endl;
    cout<< "\"Quoted String\"" << endl;
    
    cout << "---" << endl;
    cout << s + s << endl;

    return 0;
}