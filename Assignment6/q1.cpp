#include<iostream>
using namespace std;
class Product
{
    private:
    int id;
    string title;
    // int price;
    public:
    Product(void): id(0), title(" "), price(0)
    {}
    Product(int id, string title, int price): id(id), title(title), price(price)
    {}
    void acceptRecord()
    {
        cout<<"Enter a id:"<<id<<endl;
        cin>>id;
        cout<<"enter a title:"<<title<<endl;
        cin>>title;
        cout<<"enter a price:"<<price<<endl;
        cin>>price;
    }
    void displayRecord()
    {
        cout<<"enter a id:"<<id<<endl<<"enter a title:"<<title<<endl<<"enter a price:"<<price<<endl;
    }
    protected:
    float bill;
    int price;
    public: 
    virtual void calculateBill(void) = 0;
    void ptindRecord(void)
    {
        cout<<"FinallBill:"<<bill<<endl;
    }
};
class Book : public Product
{
    private:
    string author;
    public:
    Book(void) : author(" ")
    {}
    Book( int id, string title, string author, float price): author(author)
    {}
    void acceptRecord()
    {
        Product::acceptRecord();
        cout<<"Enter a author name"<<author<<endl;
        cin>>author;
    }
    void calculateBill() override
    {
        // Product::calculateBill();
        double discount;
        discount = price * 0.05;
        bill = price - discount;
    }
    void displayRecord()
    {
        Product::displayRecord();
        cout<<"author name:"<<author<<endl<<"The Final Bill:"<<bill<<endl;;
    }
};
class Tape : public Product
{
    private:
    string artist;
    public:
    Tape(void):artist(" ")
    {}
    Tape( int id, string title, string artist, float price): artist(artist)
    {}
    void acceptRecord()
    {
        Product::acceptRecord();
        cout<<"Enter a artist name"<<artist<<endl;
        cin>>artist;
    }
    void dispalyRecord()
    {
        Product::displayRecord();
        cout<<"artist name:"<<artist<<endl<<"The final bill: "<<bill<<endl;
    }
    void calculateBill(void) override
    {
        // Product::calculateBill();
        double discount;
        discount = price * 0.1;
        bill = price - discount;
    }
};
int main()
{
    Product *p1[3] = {nullptr};
    int index = 0;
    int choice;
    do
    {
        cout<<"Product  menu :"<<endl;
        cout<<"0. exit and calculate total"<<endl;
        cout<<"1. Book"<<endl;
        cout<<"2. Tape"<<endl;
        cout<<"enter a choice"<< endl;
        cin>> choice;
        if (choice == 0)
        break;
        if(index >= 3)
        {
            cout<<"Items are full"<<endl;
            break;
        }

        switch (choice)
        {
            case 1:
            {
                p1[index] = new Book();
                p1[index]->acceptRecord();
                p1[index]->calculateBill();
                p1[index]->displayRecord();
                index++;
               }
            break;
            case 2:
            {
                p1[index] = new Tape();
                p1[index]->acceptRecord();
                p1[index]->calculateBill();
                p1[index]->displayRecord();
            }
            break;
            default :
            cout<<"invalid choices";
        }
    }
    while (index <3 );
    for(int i = 0; i < index; i++)
    {
        delete p1[i];
        p1[i] = nullptr;
    }
    return 0;
}
