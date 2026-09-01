#include <iostream>
using namespace std;
class Employee
{
    private:
        int id;
        double salary;
    public:
        Employee()
        {
            id = 0;
            salary = 0;
        }
        Employee(int id, double salary)
        {
            this->id = id;
            this->salary = salary;
        }
        void setId(int id)
        {
            this->id = id;
        }
        int getId()
        {
            return id;
        }
        void setSalary(double salary)
        {
            this->salary = salary;
        }
        double getSalary()
        {
            return salary;
        }
        void accept()
        {
            cout << "Enter Employee ID: ";
            cin >> id;

            cout << "Enter Salary: ";
            cin >> salary;
        }
        void display()
        {
            cout << "Employee ID: " << id << endl;
            cout << "Salary: " << salary << endl;
        }
};
class Manager : virtual public Employee
{
    private:
        double bonus;
    public:
        Manager()
        {
            bonus = 0;
        }
        Manager(int id, double salary, double bonus) : Employee(id, salary)
        {
            this->bonus = bonus;
        }
        void setBonus(double bonus)
        {
            this->bonus = bonus;
        }
        double getBonus()
        {
            return bonus;
        }
        void acceptManager()
        {
            Employee::accept();

            cout << "Enter Bonus: ";
            cin >> bonus;
        }
        void displayManager()
        {
            Employee::display();

            cout << "Bonus: " << bonus << endl;
        }
};
class Salesman : virtual public Employee
{
    private:
        double commission;
    public:
        Salesman()
        {
            commission = 0;
        }
        Salesman(int id, double salary, double commission) : Employee(id, salary)
        {
            this->commission = commission;
        }
        void setCommission(double commission)
        {
            this->commission = commission;
        }
        double getCommission()
        {
            return commission;
        }
        void acceptSalesman()
        {
            Employee::accept();
            cout << "Enter Commission: ";
            cin >> commission;
        }
        void displaySalesman()
        {
            Employee::display();
            cout << "Commission: " << commission << endl;
        }
};
class SalesManager : public Manager, public Salesman
{
    public:
        SalesManager()
        {}
        SalesManager(int id, double salary, double bonus, double commission) : Employee(id, salary), Manager(id, salary, bonus), Salesman(id, salary, commission)
        {}
        void accept()
        {
            Employee::accept();
            cout << "Enter Bonus: ";
            double bonus;
            cin >> bonus;
            Manager::setBonus(bonus);
            cout << "Enter Commission: ";
            double commission;
            cin >> commission;
            Salesman::setCommission(commission);
        }
        void display()
        {
            cout << "Sales Manager Details" << endl;
            Employee::display();
            cout << "Bonus: "<< Manager::getBonus() << endl;
            cout << "Commission: "<< Salesman::getCommission() << endl;    }
};

int main()
{
    cout << "Employee" << endl;
    Employee e1;
    e1.accept();
    e1.display();
    cout << "Manager" << endl;
    Manager m1;
    m1.acceptManager();
    m1.displayManager();
    cout << "Salesman" << endl;
    Salesman s1;
    s1.acceptSalesman();
    s1.displaySalesman();
    cout << "Sales Manager" << endl;
    SalesManager sm1;
    sm1.accept();
    sm1.display();
    return 0;
}