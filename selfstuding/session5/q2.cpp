#include<iostream>
using namespace std;
inline int factorial(int n)
{
    int fact = 1;
    for (int i; i<n; i++)
    {
        fact = fact +1;
    }
    return fact;
}
inline int Power(int base, int expo)
{
    int result = 1;
    for(int i = 1; i<=expo; i++)
    {
        result = result * base; 
    }
    return result;
}
int main()
{
    int num;
    cout<< "Enter a number:"<< num <<endl;
    cin>>num;
    cout<<"Factorail of a number: "<< num <<" "<< factorial(num)<<endl;
    int base, exponent;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter exponent:";
    cin>>exponent;
    cout<<"power = "<<Power(base, exponent)<<endl;
    return 0;
}