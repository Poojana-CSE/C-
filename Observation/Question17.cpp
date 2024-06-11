// 17. Program to capitalize the first character of each element of a given string vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {"apple", "banana", "cherry"};
    for (auto &word : words) {
        word[0] = toupper(word[0]);
    }
    for (const auto &word : words) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
