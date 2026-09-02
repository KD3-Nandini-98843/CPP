#include <iostream>
using namespace std;
class InvalidMarksException
{
};
class Student
{
private:
    int marks;
public:
    void setMarks(int m)
    {
        if(m < 0)
        {
            throw InvalidMarksException();
        }
        marks = m;
    }
    void display()
    {
        cout << "Marks: "<< marks << endl;
    }
};
int main()
{
    Student s;
    try
    {
        int marks;
        cout << "Enter marks: ";
        cin >> marks;
        s.setMarks(marks);
        s.display();
    }
    catch(InvalidMarksException)
    {
        cout << "Marks cannot be negative"<< endl;
    }
    return 0;
}