#include<bits/stdc++.h>
using namespace std;

class BankAccount {
    private:
        string accountHolder;
        int accountNumber;
        double balance;
        string pin;
    
    public:
        BankAccount(string holder, int accNum, double initialBalance, string pin) {
            this -> accountHolder = holder;
            this -> accountNumber = accNum;
            this -> balance = initialBalance;
            this -> pin = pin;
        }

        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout << "Deposited :" << amount << ". New Balance is: :" << balance << endl; 
            } else {
                cout << "Invalid Amount given for deposit!." << endl;
            }
        }

        void withdraw(double amount, string pin) {
            if(pin != this -> pin) {
                cout << "Invalid Pin!."<< endl;
                return;
            } else if(amount > 0 && balance >= amount) {
                balance -= amount;
                cout << "Withdraw amount : " << amount << "New balance is: " << balance << endl;
            } else {
                cout << "Invalid or Insufficient Balance!." << endl;
            }
        }
        void display() const {
            cout << "Account Holder : " << accountHolder << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Balance : " << balance << endl;
        }
};

int main() {
    BankAccount account("anshuman", 2007, 100000, "4567");
    account.display();
    account.deposit(10000);
    
    account.withdraw(10000, "4567");
  
    return 0;
}