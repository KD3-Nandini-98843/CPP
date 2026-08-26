#include <iostream>
using namespace std;

class Toolboth
{
    private:
    unsigned int totalcars;
    unsigned int payingcars;
    unsigned int nonpayingcars;
    double totalmoney;
    public:
    Toolboth()
    {
        totalcars = 0;
        payingcars = 0;
        nonpayingcars = 0;
        totalmoney = 0.0;
    }
    void payingcar()
    {
        totalcars++;
        payingcars++;
        totalmoney += 0.50;
    }
    void nonpayingcar()
    {
        totalcars++;
        nonpayingcars++;
    }
    void printonconsole()
    {
        cout << "Total cars: " << totalcars << endl;
        cout << "Paying cars: " << payingcars << endl;
        cout << "Non-paying cars: " << nonpayingcars << endl;
        cout << "Total money collected: " << totalmoney << endl;
    }
};

int main()
{
    Toolboth booth;
    int choice;
    int n;
    cout << "Enter number of cars: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nCar " << i << endl;
        cout << "1. Paying car" << endl;
        cout << "2. Non-paying car" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            booth.payingcar();
            break;
        case 2:
            booth.nonpayingcar();
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    booth.printonconsole();
    return 0;
}