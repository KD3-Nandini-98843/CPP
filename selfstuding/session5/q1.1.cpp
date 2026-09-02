// 
#include<iostream>
using namespace std;
void swapByReference (int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 10, y= 20;
    cout<<"Before swapping:"<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping:"<<x<<" "<<y<<endl;
    return 0;
}
