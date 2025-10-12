#include <iostream>
#include <string>
using namespace std;

void reply() {
string str;
    cout << "Enter a string: ";
    getline(cin, str); // read a line of text including spaces
    cout << "You entered: " << str << endl;
}
