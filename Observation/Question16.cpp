// 16. Program to design a simple banking system with base class Account and derived classes SavingsAccount and CurrentAccount
#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;
public:
    Account(int num, double bal) : accountNumber(num), balance(bal) {}
    virtual void display() = 0;
};

class SavingsAccount : public Account {
private:
    double interestRate;
public:
    SavingsAccount(int num, double bal, double rate) : Account(num, bal), interestRate(rate) {}
    void display() override {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    CurrentAccount(int num, double bal, double limit) : Account(num, bal), overdraftLimit(limit) {}
    void display() override {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount savings(1001, 5000, 0.05);
    CurrentAccount current(2001, 10000, 2000);
    savings.display();
    current.display();
    return 0;
}
