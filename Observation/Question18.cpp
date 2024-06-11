// 18. Program to dynamically allocate an array of integers and strings and initialize its elements
#include <iostream>
#include <string>
using namespace std;

int main() {
    int* intArray = new int[5]{1, 2, 3, 4, 5};
    string* strArray = new string[3]{"apple", "banana", "cherry"};

    for (int i = 0; i < 5; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 3; ++i) {
        cout << strArray[i] << " ";
    }
    cout << endl;

    delete[] intArray;
    delete[] strArray;
    return 0;
}
