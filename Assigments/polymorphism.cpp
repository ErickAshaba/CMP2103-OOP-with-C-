#include <iostream>
using namespace std;

// Base Class
class PaymentMethod {

public:

    // Virtual function
    virtual void pay(double amount) {
        cout << "Processing payment of "
             << amount << endl;
    }

    virtual ~PaymentMethod() {}
};

// Derived Class 1
class MobileMoney : public PaymentMethod {

public:

    // Overriding virtual function
    void pay(double amount) override {
        cout << "Paying UGX "
             << amount
             << " using Mobile Money."
             << endl;
    }
};

// Derived Class 2
class BankCard : public PaymentMethod {

public:

    // Overriding virtual function
    void pay(double amount) override {
        cout << "Paying UGX "
             << amount
             << " using Bank Card."
             << endl;
    }
};

// Main Function
int main() {

    // Creating objects
    MobileMoney mobile;
    BankCard card;

    // Base-class pointer
    PaymentMethod* payment;

    // Pointer refers to MobileMoney object
    payment = &mobile;

    cout << "MOBILE MONEY PAYMENT" << endl;
    payment->pay(50000);

    cout << "\n";

    // Pointer refers to BankCard object
    payment = &card;

    cout << "BANK CARD PAYMENT" << endl;
    payment->pay(50000);

    return 0;
}