#include<iostream>
using namespace std;
namespace  college
{
    class Teacher
{
    private:
    int teacher_id;
    string teacher_name;
    int salary;
    public:
    Teacher(void): teacher_id(0), teacher_name(" "), salary(0)
    {}
    Teacher(int teacher_id, string teacher_name, int salary): teacher_id (teacher_id), teacher_name(teacher_name), salary(salary)
    {
        teacher_id = teacher_id;
        teacher_name =teacher_name;
        salary = salary;
    }
    void getteacher_id(int teacher_id)
    {
        teacher_id = teacher_id;
    }  
    void getteacher_name(string teacher_name)
    {
        teacher_name = teacher_name;
    }  
    void getsalary(int salary)
    {
        salary = salary;
    }  
    int setteacher_id(void)
    {
        return teacher_id;
    }  
    string setteacher_name(void)
    {
        return teacher_name;
    } 
    int setsalary(void)
    {
        return salary;
    } 
    void display()
        {
            cout<<"enter a teacher id"<<teacher_id<<endl;
            cout<<"enter a teacher name"<<teacher_name<<endl;
            cout<<"enter a salary:"<<salary<<endl;
        }
};
class Student
{
    private:
    string stud_name;
    int roll_no;
    public:
    Student(void): stud_name(" "), roll_no(0)
    {}
    Student(string stud_name, int roll_no): stud_name(stud_name), roll_no(roll_no)
    {
        stud_name =stud_name;
        roll_no = roll_no;
    } 
    void getstud_name(string stud_name)
    {
        stud_name = stud_name;
    }  
    void getsalary(int roll_no)
    {
        roll_no = roll_no;
    } 
    string setstud_name(void)
    {
        return stud_name;
    } 
    int setroll_no(void)
    {
        return roll_no;
    } 
    void display()
        {
            cout<<"enter a student name"<<stud_name<<endl;
            cout<<"enter a roll_no:"<<roll_no<<endl;
        }
};
}
int main()
{
    college::Student s("Nandini", 28);
    college::Teacher t(101, "Shelza", 2000);
    t.display();
    s.display();
    return 0;
}
