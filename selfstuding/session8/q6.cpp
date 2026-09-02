#include<iostream>
using namespace std;
class BankAccount
{
    private:
    int accountNumber;
    string accountHolderName;
    int balance;
    public:
    BankAccount(void): accountNumber(0), accountHolderName(" "), balance(0)
    {}
    BankAccount(int accountNumber, string accountHolderName, int balance): accountNumber(accountNumber), accountHolderName(accountHolderName), balance(balance)
    {
        accountNumber = accountNumber;
        accountHolderName = accountHolderName;
        balance = balance;
    }
    void depositMoney(int ammount)
    {
        if(ammount>0)
        {
            balance = balance + ammount;
            cout<<"Money deposited"<<endl;
        }
        else
        {
            cout<<"Enter a valid ammount"<<endl;
        }
    }
    void withdrawMOney(int ammount)
    {
        if(ammount>balance)
        {
            cout<<"enter a sufficeint amount"<<endl;
        }
        else if (ammount <<= 0)
        {
            cout<<"enter a sufficient money"<<endl;
        }
        else
        {
            balance = balance - ammount;
            cout<<"MOnaey withdraw succesfully"<<endl;
        }
        
    }
    void displaydeatils()
    {
        cout<<"Enter a accountNUmber" <<accountNumber<<endl;
        //cin>>accountNumber;
        cout<<"Enter a accountHolderName"<< accountHolderName<<endl;
        //cin>>accountHolderName;
        cout<<"enter a balacne"<< balance<<endl;
        //cin>>balance;
    }
};
int main()
{
    BankAccount b1(101, "Nandini", 5000);
    b1.depositMoney(2000);
    b1.withdrawMOney(1000);
    b1.displaydeatils();
    return 0;
}