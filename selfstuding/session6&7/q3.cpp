#include <iostream>
using namespace std;
class Student
{
    private:
        int rollNo;
        float marks;
    public:
        void accept()
        {
            cout << "Enter Roll Number: ";
            cin >> rollNo;
            cout << "Enter Marks: ";
            cin >> marks;
        }
        void display()
        {
            cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
        }
        float getMarks()
        {
            return marks;
        }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *students = new Student[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].accept();
    }
    cout << "\nAll Student Records:\n";
    for(int i = 0; i < n; i++)
    {
        students[i].display();
    }
    float highest = students[0].getMarks();
    for(int i = 1; i < n; i++)
    {
        if(students[i].getMarks() > highest)
        {
            highest = students[i].getMarks();
        }
    }
    cout << "\nHighest Marks = "<< highest << endl;
    delete[] students;
    return 0;
}