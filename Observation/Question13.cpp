// 13. Program to implement a class called BankAccount for depositing and withdrawing money
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    cout << "Balance: " << acc.getBalance() << endl;
    acc.withdraw(500);
    cout << "Balance after withdrawal: " << acc.getBalance() << endl;
    return 0;
}
