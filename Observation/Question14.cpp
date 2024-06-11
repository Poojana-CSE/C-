// 14. Program to implement a class called Student to calculate grade and display information
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    int marks;
public:
    Student(string n, string cn, int rn, int m) {
        name = n;
        className = cn;
        rollNumber = rn;
        marks = m;
    }
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student stud("John", "XII", 101, 85);
    stud.displayInfo();
    return 0;
}
