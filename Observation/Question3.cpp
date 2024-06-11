// 3. Program to display mixed data types and arithmetic operations
#include <iostream>
using namespace std;

int main() {
    int integerVar = 10;
    float floatVar = 5.5;
    double doubleVar = 3.14159;
    char charVar = 'A';
    string stringVar = "Hello, World!";
    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "String: " << stringVar << endl;
    int sumInt = integerVar + 5;
    float sumFloat = floatVar + 2.5;
    double productDouble = doubleVar * 2.0;
    int charToInt = charVar + 5;
    cout << "Sum of Integer and 5: " << sumInt << endl;
    cout << "Sum of Float and 2.5: " << sumFloat << endl;
    cout << "Product of Double and 2.0: " << productDouble << endl;
    cout << "Character 'A' + 5 (as Integer): " << charToInt << " (which is character '" << char(charToInt) << "')" << endl;
    
    return 0;
}