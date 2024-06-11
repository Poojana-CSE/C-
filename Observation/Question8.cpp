// 8. Program to check if a given integer is within 10 of 100 or 200
#include <iostream>
using namespace std;

bool checkInRange(int num) {
    return (abs(100 - num) <= 10 || abs(200 - num) <= 10);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << boolalpha << checkInRange(num) << endl;
    return 0;
}
