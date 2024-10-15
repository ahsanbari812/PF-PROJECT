#include <iostream>
using namespace std;

class BankAccount {
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string accountno, string accHolder, double bal) {
        accountNumber = accountno;
        accountHolderName = accHolder;
        balance = bal;
    }

    void deposit(double amount) {
        balance=balance + amount; 
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance=balance - amount; 
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    BankAccount accounts[3] = {
        BankAccount("5432-101-233", "Mahnoor Hussain", 1004.56),
        BankAccount("5672-190-456", "Immad Hussain", 2000.780),
        BankAccount("7890-122-098", "Lubna Hussain", 15230.7)
    };

    cout << "Account details before transactions:" << endl;
    for (int i = 0; i < 3; i++) {
        accounts[i].display();
        cout << "------------------------------------------" << endl;
    }

    for (int i = 0; i < 3; i++) {
        accounts[i].deposit(500.0);
        cout << "After depositing 500.0:" << endl;
        accounts[i].display();

        accounts[i].withdraw(200.0);
        cout << "After withdrawing 200.0:" << endl;
        accounts[i].display();

        cout << "------------------------------------------" << endl;
    }
}