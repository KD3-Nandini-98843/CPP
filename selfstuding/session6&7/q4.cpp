#include<iostream>
using namespace std;
class Laptop
{
    private:
    int brand_id;
    double price;
    public:
    Laptop()
    {
        brand_id = 1;
        price = 5000;
        cout<<"Laptop constrcutor "<<endl;
    }
    ~Laptop()
    {
        cout<<"laptop destrcutror called"<<endl;
    }
    void display()
    {
        cout<<"brand_id"<<brand_id<<endl;
        cout<<"Price"<<price<<endl;
    }
};
int main()
{
    Laptop l1;
    l1.display();
    return 0;
}