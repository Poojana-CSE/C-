// 7. Program to add up all the digits between two given integers
#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0;
    cout << "Enter the starting integer: ";
    cin >> start;
    cout << "Enter the ending integer: ";
    cin >> end;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
