#include <iostream>
#include <memory>
using namespace std;
class Student
{
public:
    void display()
    {
        cout << "Student Display" << endl;
    }
};
int main()
{
    try
    {
        unique_ptr<Student> s(new Student);
        s->display();
    }
    catch(...)
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}