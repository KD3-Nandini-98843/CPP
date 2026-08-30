#include<iostream>
using namespace std;
class Date
{
    private:
    int date;
    int month;
    int year;
    public:
    Date(void):date(31), month(12), year(2026)
    {}
    Date(int date, int month, int year): date(date), month(month), year(year)
    {}
    void acceptDate()
    {
        cout<<"Enter a date:"<<date<<endl;
        cin>>date;
        cout<<"Enter a month:"<<month<<endl;
        cin>>month;
        cout<<"Enter a year:"<<year<<endl;
        cin>>year;
    }
    void displayDate()
    {
        cout<<"Enter a date :" << date<<"/"<<month<<"/"<<year<<endl;
    }
};
class Person
{
    private:
    string name;
    string address;
    Date Birthday;
    public:
    Person(void): name(" "), address(" ")
    {}
    Person(string name, string address, Date Birthday): name(name), address(address), Birthday(Birthday) 
    {}
    Person(string name, string address, int date, int month, int year): name(name), address(address), Birthday(date,month,year)
    {}
    void acceptPerson()
    {
        cout<<"Enter a name"<<name<<endl;
        cin>>name;
        cout<<"Enter a address"<<address<<endl;
        cin>>address;
        cout<< "Enter a birthday :";
        Birthday.acceptDate();
    }
    void displayPerson()
    {
        cout<<name<<endl<<address<<endl;
        Birthday.displayDate();
    }
};
class Student
{
    private:
    int id;
    int marks;
    string course;
    Date joiningdate;
    Date endDate;
    public:
    Student(void): id(0), marks(0), course(" ")
    {}
    Student(int id, int marks, string course, Date joiningdate, Date endDate ): id(id), marks(marks), course(course), joiningdate(joiningdate), endDate(endDate)
    {}
    Student(int id, int marks,string course, int date, int month, int year): id(id), marks(marks), course(course), joiningdate(date,month,year), endDate(date,month,year)
    {}
    // Student(int id, int marks, string course, int jDate, int jMonth, int jYear, int eDate, int eMonth, int eYear) : id(id), marks(marks), course(course), joiningdate(jDate, jMonth, jYear), endDate(eDate, eMonth, eYear)
    // {}
    void acceptStudent()
    {
        cout<<"Enter a Id"<<id<<endl;
        cin>>id;
        cout<<"Enter a marks"<<marks<<endl;
        cin>>marks;
        cout<<"Enter a Course:"<<course<<endl;
        cout<< "Enter a joiningdate:";
        joiningdate.acceptDate();
        cout<< "Enter a EndDate:";
        endDate.acceptDate();

    }
    void displayStudent()
    {
        cout<<id<<endl<<marks<<endl<<course<<endl;
        joiningdate.displayDate();
        endDate.displayDate();
    }
};
int main()
{
    Student S1;
    S1.acceptStudent();
    S1.displayStudent();
    Person p1;
    p1.acceptPerson();
    p1.displayPerson();
    return 0;
}

// int main()
// {
//     // Person P1("aarna", "chandigarh", 19, 10, 2003);
//     // P1.displayPerson();
//     Student s1(2, 89, "cse", 18, 06, 2025, 16,07,2026);
//     s1.displayStudent();

//     return 0;
// }