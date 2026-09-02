#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;
public:
    BankAccount(double b)
    {
        balance = b;
    }
    void deposit(double amount)
    {
        if(amount < 0)
        {
            throw amount;
        }
        balance = balance + amount;
    }
    void withdraw(double amount)
    {
        if(amount < 0)
        {
            throw amount;
        }
        if(amount > balance)
        {
            throw string("Insufficient Balance");
        }
        balance = balance - amount;
    }
    void display()
    {
        cout << "Balance: "<< balance << endl;
    }
};
int main()
{
    BankAccount account(5000);
    try
    {
        account.deposit(1000);
        account.withdraw(7000);
    }
    catch(double amount)
    {
        cout << "Invalid Amount: "<< amount << endl;
    }
    catch(string message)
    {
        cout << "Error: "<< message << endl;
    }
    account.display();
    return 0;
}