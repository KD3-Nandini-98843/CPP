#include <iostream>
#include <cstring>
using namespace std;
class Payment
{
public:
    virtual void makePayment(double amount) = 0;

    virtual ~Payment()
    {
    }
};
class CreditCard : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Credit Card Payment of "<< amount << " successful" << endl;
    }
};
class UPI : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "UPI Payment of "<< amount << " successful" << endl;
    }
};
class Cash : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Cash Payment of "<< amount << " successful" << endl;
    }
};
class PaymentFactory
{
public:
    static Payment* create(char *mode)
    {
        if(strcmp(mode, "CreditCard") == 0)
        {
            return new CreditCard;
        }
        else if(strcmp(mode, "UPI") == 0)
        {
            return new UPI;
        }
        else if(strcmp(mode, "Cash") == 0)
        {
            return new Cash;
        }
        return NULL;
    }
};
int main()
{
    char mode[20];
    cout << "Enter Payment Mode "<< "(CreditCard/UPI/Cash): ";
    cin >> mode;
    Payment *payment =
        PaymentFactory::create(mode);
    if(payment != NULL)
    {
        payment->makePayment(5000);
        delete payment;
    }
    else
    {
        cout << "Invalid Payment Mode" << endl;
    }
    return 0;
}