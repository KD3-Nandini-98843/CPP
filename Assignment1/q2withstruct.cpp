#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
}; 
void initDate(struct Date* ptrDate)
{
    ptrDate->day=1;
    ptrDate->month = 12;
    ptrDate->year = 2022;
}
void printDateOnConsole(struct Date* ptrDate)
{
    cout<< ptrDate->day <<" "<< ptrDate->month <<" "<< ptrDate->year <<" "<<endl;

}
void acceptDateFromConsole(struct Date* ptrDate) 
{
    cout<< "enter a date: ";
    cin>> ptrDate->day;
    cout<< " enter a month: ";
    cin>> ptrDate->month;
    cout<< " enter a year: ";
    cin>> ptrDate->year;
}
 bool isLeapYear(struct Date* ptrDate)
    {
        if ((ptrDate->year % 4 == 0 && ptrDate-> year % 100 != 0) || (ptrDate->year % 400 == 0))
        return true;
        else
        return false;
    }
int main()
{
    Date date;
    int choice;
    do
    {
        cout<<"date menu :"<<endl;
        cout<<"1.intialse date:"<<endl;
        cout<<"2. print date:"<<endl;
        cout<<"3. accept date:"<<endl;
        cout<<"4. check leapyeat"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter a choice"<< endl;
        cin>> choice;

        switch (choice)
        {
            case 1:
            initDate(&date);
            break;
            case 2:
            printDateOnConsole(&date);
            break;
            case 3:
            acceptDateFromConsole(&date);
            break;
            case 4:
            if (isLeapYear(&date))
                    cout << "It is a leap year.\n";
                else
                    cout << "It is not a leap year.\n";
                break;
            case 5:
            cout<<"exit";
            default :
            cout<<"invalid choices";
        }
    }
    while (choice < 5);
    return 0;
}
