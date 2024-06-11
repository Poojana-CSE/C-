// 11. Program to check if two or more integers that are not negative have the same rightmost digit
#include <iostream>
using namespace std;

bool sameRightmostDigit(int num1, int num2) {
    return (num1 % 10 == num2 % 10);
}

int main() {
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << boolalpha << sameRightmostDigit(num1, num2) << endl;
    return 0;
}
