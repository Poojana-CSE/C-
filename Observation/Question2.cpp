// 2. Program to check the upper and lower limits of integers
#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<int>::max() << endl;
    return 0;
}
