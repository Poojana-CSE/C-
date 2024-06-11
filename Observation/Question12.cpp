// 12. Program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1
#include <iostream>
using namespace std;

string createNewString(string s1, string s2) {
    return s1 + s2 + s2 + s1;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    cout << "New string: " << createNewString(s1, s2) << endl;
    return 0;
}
