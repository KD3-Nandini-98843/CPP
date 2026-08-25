#include<iostream>
using namespace std;
class Date
{
    private:
    int day, month, year;
    public:
    void initDate()
    {
        day = 1;
        month = 12;
        year = 2020;
    }
    void printDateOnConsole()
    {
        cout<< day <<" "<< month <<" "<< year <<" "<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<< "enter a date: ";
        cin>> day;
        cout<< " enter a month: ";
        cin>> month;
        cout<< " enter a year: ";
        cin>> year;
    }
    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
        else
        return false;
    }
};
int main()
{
    Date d;
    int choice;
    do
    {
        cout << "Date menu\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                d.initDate();
                cout << "Date initialized successfully.\n";
                break;

            case 2:
                d.acceptDateFromConsole();
                break;

            case 3:
                d.printDateOnConsole();
                break;

            case 4:
                if (d.isLeapYear())
                    cout << "It is a leap year.\n";
                else
                    cout << "It is not a leap year.\n";
                break;

            case 5:
                cout << "Exiting program\n";
                break;

            default:
                cout << "invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}