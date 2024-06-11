// 10. Program to create another string which is n copies of the first 3 characters of a given string
#include <iostream>
using namespace std;

string copiesOf3Front(string str, int n) {
    string front = str.substr(0, 3);
    string result;
    for (int i = 0; i < n; ++i) {
        result += front;
    }
    return result;
}

int main() {
    string input;
    int n;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter the number of copies: ";
    cin >> n;
    cout << "Result: " << copiesOf3Front(input, n) << endl;
    return 0;
}
