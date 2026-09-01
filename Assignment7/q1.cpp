#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    double salary;
    public:
    Employee(void)
    {}
    Employee(int id, double salary): id(id), salary(salary)
    {}
    void setid(int)
    {
        this->id = id;
    }
    void setsalary(double)
    {
        this->salary = salary;
    }
    int getid(void)
    {
        return id;
    }
    double getsalary(void)
    {
        return salary;
    }
    virtual void accept()
    {
        cout<<"Enter a id: "<<id<<endl;
        cin>>id;
        cout<<"Enter a salary: "<<salary<<endl;
        cin>>salary;
    }
    virtual void display()
    {
        cout<<"Details:"<<endl<<id<<endl<<salary<<endl;
    }
};
class Manager : virtual public Employee
{
    private:
    double bonus;
    public:
    Manager(void)
    {}
    Manager(double bonus, int id, double salary): bonus(bonus)
    {}
    void aacept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }
    protected:
    void acceptManager()
    {
        cout<<"enter a bonus:"<<bonus<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"bonus: "<<bonus<<endl;
    }
};
class Salesman : virtual public Employee
{
    private:
    double commission;
    public:
    Salesman(void)
    {}
    Salesman(double commission, int id, double salary): commission(commission)
    {}
    void aacept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    protected:
    void acceptSalesman()
    {
        cout<<"enter a commission:"<<commission<<endl;
        cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"bonus: "<<commission<<endl;
    }
};
class SalesmanManager : public Manager, public Salesman
{
    public:
    SalesmanManager(void)
    {}
    SalesmanManager(int id, double salary, double bonus, double commission)
    {}
    void accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();

    }
    void display()
    {
        Employee::display();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};
int main() 
{
    Employee* employees[5]; 
    int employeeCount = 0;  
    int choice;

    do {
        cout << "Employee System"<<endl;
        cout << "1. Add Manager"<<endl;
        cout << "2. Add Salesman"<<endl;
        cout << "3. Add Salesmanager"<<endl;
        cout<<  "4. Display the count of all employes with designation: "<<endl;
        cout<<  "5. Display all manager: "<<endl;
        cout<<  "6. Display all SalesManager: "<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
        if (choice >= 1 && choice <= 3) 
        {
            if (employeeCount >= 5) 
            {
                cout << "Cannot add more employees."<<endl;
                continue;
            }
        }
        switch (choice) 
        {
            case 1: 
            {
                Manager* m = new Manager();
                m->accept();
                employees[employeeCount] = m;
                employeeCount++;
                cout << "Manager added successfully"<<endl;
                break;
            }
            case 2: 
            {
                Salesman* s = new Salesman();
                s->accept();
                employees[employeeCount] = s; 
                employeeCount++;
                cout << "Salesman added successfully"<<endl;
                break;
            }
            case 3: 
            {
                SalesmanManager* sm = new SalesmanManager();
                sm->accept();
                employees[employeeCount] = sm;
                employeeCount++;
                cout << "Sales Manager added successfully"<<endl;
                break;
            }
            case 4:
            {
                int managerCount = 0;
                int salesmanCount = 0;
                int salesManagerCount = 0;
                for (int i = 0; i < employeeCount; i++) 
                {
                    if (typeid(*employees[i]) == typeid(Manager)) 
                    {
                        managerCount++;
                    }
                    else if (typeid(*employees[i]) == typeid(Salesman)) 
                    {
                        salesmanCount++;
                    }
                    else if (typeid(*employees[i]) == typeid(SalesmanManager)) 
                    {
                        salesManagerCount++;
                    }
                    else{

                    }
                }

                cout << "Display the count of all employes with designation: " << endl;
                cout << "Managers: " << managerCount << endl;
                cout << "Salesmen: " << salesmanCount << endl;
                cout << "Sales Managers: " << salesManagerCount << endl;
                cout << "Total Employees: " << employeeCount << endl;
                break;
            }
            case 5:
            {
                int managerCount = 0;
                for (int i = 0; i < employeeCount; i++) 
                {
                    if (typeid(*employees[i]) == typeid(Manager)) 
                    {
                        managerCount++;
                    }
                    else{      
                    }
                }
                cout << "Display All Managers : " << managerCount << endl;
                break;
            }
            case 6:
            {
                int salesmanCount = 0;
                int salesManagerCount = 0;
                for (int i = 0; i < employeeCount; i++) 
                {
                    if (typeid(*employees[i]) == typeid(Salesman)) 
                    {
                        salesmanCount++;
                    }
                    else{

                    }
                }
                cout << "Display All Salesman: " << salesmanCount << endl;
                break;
            }
            case 7:
            {
                int salesManagerCount = 0;
                for (int i = 0; i < employeeCount; i++) 
                {
                    if (typeid(*employees[i]) == typeid(SalesmanManager)) 
                    {
                        salesManagerCount++;
                    }
                    else{

                    }
                }
                cout << "Display All Sales Managers: " << salesManagerCount << endl;
                break;
            }
            case 8:
                cout << "Exit"<<endl;
                break;
            break;
            default:
                cout << "Invalid choice"<<endl;
        }
    }
    while (choice != 8);
    for (int i = 0; i < employeeCount; i++) 
    {
        delete employees[i];
    }
    return 0;
}
