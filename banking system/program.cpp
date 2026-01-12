#include <iostream>
using namespace std;

// Base Class
class BankAccount {
protected:
    int accNo;
    double balance;

public:
    BankAccount(int a, double b) {
        accNo = a;
        balance = b;
    }

    virtual void deposit(double amt) {
        balance += amt;
    }

    virtual void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    virtual void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived Class 1
class SavingsAccount : public BankAccount {
    double rate;

public:
    SavingsAccount(int a, double b, double r)
        : BankAccount(a, b) {
        rate = r;
    }

    void display() {
        BankAccount::display();
        cout << "Interest: " << (balance * rate / 100) << endl;
    }
};

// Derived Class 2
class CheckingAccount : public BankAccount {
    double limit;

public:
    CheckingAccount(int a, double b, double l)
        : BankAccount(a, b) {
        limit = l;
    }

    void withdraw(double amt) {
        if (amt <= balance + limit)
            balance -= amt;
        else
            cout << "Overdraft limit exceeded\n";
    }

    void display() {
        BankAccount::display();
        cout << "Overdraft Limit: " << limit << endl;
    }
};

// Main
int main() {
    int ch;

    while (1) {
        cout << "\n1. Savings Account";
        cout << "\n2. Checking Account";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        if (ch == 3)
            break;

        BankAccount* acc;

        if (ch == 1)
            acc = new SavingsAccount(101, 5000, 5);
        else if (ch == 2)
            acc = new CheckingAccount(102, 3000, 2000);
        else {
            cout << "Invalid Choice\n";
            continue;
        }

        acc->display();
        delete acc;
    }

    return 0;
}
