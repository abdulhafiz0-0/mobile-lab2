#include <iostream>
using namespace std;

// Q1: BankAccount class
class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Deposit method
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    // Get balance method
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.50);
    cout << "Initial balance: " << myAccount.getBalance() << endl;
    myAccount.deposit(50.25);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;
    return 0;
}

// Q2
// class: blueprint (definition)
// object: instance (actual data in memory)

// Q3
// public: accessible everywhere
// private: accessible only in class
// protected: accessible in class and derived classes

// Q4
// Initializes objects.
// Default constructor = no parameters.
// Auto-provided if no constructor is defined.
