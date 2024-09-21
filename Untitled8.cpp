#include <iostream>
#include <string>

using namespace std;

class PaymentMethod {
public:

    virtual void processPayment(double amount) = 0;
    virtual void refund(double amount) = 0;

};

class CreditCard : public PaymentMethod {
public:
    
    void processPayment(double amount) override {
        cout << "Processing Credit Card payment of $" << amount << endl;
    }

    
    void refund(double amount) override {
        cout << "Refunding $" << amount <<" to" << " Credit Card" << endl;
    }
};


class PayPal : public PaymentMethod {
public:
    
    void processPayment(double amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }

    
    void refund(double amount) override {
        cout << "Refunding $" << amount << " to PayPal account" << endl;
    }
};


class BankTransfer : public PaymentMethod {
public:
    
    void processPayment(double amount) override {
        cout << "Processing Bank Transfer payment of $" << amount << endl;
    }

    
    void refund(double amount) override {
        cout << "Refunding $" << amount << " to Bank Account" << endl;
    }
};

int main() {
    
    CreditCard creditCard;
    PayPal payPal;
    BankTransfer bankTransfer;

    
    PaymentMethod* payments[3];
    payments[0] = &creditCard;
    payments[1] = &payPal;
    payments[2] = &bankTransfer;

    
    double amount = 100.0;

    for (int i = 0; i < 3; ++i) {
        payments[i]->processPayment(amount);
        payments[i]->refund(amount);
        cout << endl; 
    }

    return 0;
}
