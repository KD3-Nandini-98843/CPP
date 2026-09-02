#include<iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b; 
    b = temp;  
}
int main()
{ 
    // before swapping 
    int a= 10, b = 12;
    cout<<"before swapping: "<<a<<" "<<b<<endl;
    //after swapping
    swapByValue(a,b);
    cout<< "after swapping:"<<a<<" "<< b<< endl;
    return 0;
}