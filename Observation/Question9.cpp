// 9. Program to create a string that is 4 copies of the 2 front characters of a given string
#include <iostream>
using namespace std;

string copiesOf2Front(string str) {
    string front = str.substr(0, 2);
    return front + front + front + front;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Result: " << copiesOf2Front(input) << endl;
    return 0;
}
