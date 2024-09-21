#include <iostream>

using namespace std;

class Account {
public:
    
    virtual double calculateInterest() = 0;
};

class SavingsAccount : public Account {
private:
    double balance;
    double annualInterestRate; 

public:
    SavingsAccount(double bal, double rate) : balance(bal), annualInterestRate(rate) {}

    double calculateInterest()  override {
        return balance * (annualInterestRate / 100);
    }
};

class CheckingAccount : public Account {
private:
    double balance;
    double fixedInterest;

public:
    CheckingAccount(double bal, double interest) : balance(bal), fixedInterest(interest) {}
    
    double calculateInterest()  override {
        return fixedInterest;
    }
};

int main() {
    
    SavingsAccount savings(1000.0, 2.5);  
    CheckingAccount checking(2000.0, 50.0); 

    Account* accounts[2];
    accounts[0] = &savings;
    accounts[1] = &checking;

    
    for (int i = 0; i < 2; ++i) {
        cout << "Interest: $" << accounts[i]->calculateInterest() << endl;
    }

    return 0;
}
