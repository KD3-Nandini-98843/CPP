#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    int age;
    public:
    Person(void):name(" "), age(0)
    {}
    Person(string name, int age): name(name), age(age)
    {
        name = name;
        age = age;
    }
    void dispaly()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"age"<<age<<endl;
    }
    virtual void work() = 0;
};
class Student : public Person
{
    private:
    float marks;
    public:
    Student(string name, int age, float marks): Person(name, age)
    {
        marks = marks;
    }
    void study()
    {
        cout<< name <<"is study" << endl;
    }
    void work()
    {
        cout<<"student work:study"<<endl;
    }
};
class Teacher : public Person
    {
        private:
        double salary;
        public:
        Teacher(void) : Person(), salary(0)
        {}
        Teacher(string name, int age, double salary): Person(name, age)
        {
            this->salary = salary;
        }
        void teach()
        {
            cout << name << " is teaching" << endl;
        }
        void work()
        {
            cout << "Teacher work: Teaching" << endl;
        }
};


int main()
{
    Person *p;
    Student s("Aarna", 16, 90);
    Teacher t("Rahul", 35, 50000);
    p = &s;
    p->dispaly();
    p->work();
    s.study();
    cout << endl;
    p = &t;
    p->dispaly();
    p->work();
    t.teach();
    return 0;
}