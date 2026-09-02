#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    int rollNo;
    char name[50];
    float marks;
public:
    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s;
    s.accept();
    ofstream fout("student.txt");
    fout.write(
        (char*)&s,
        sizeof(Student)
    );
    fout.close();
    Student s2;
    ifstream fin("student.txt");
    fin.read(
        (char*)&s2,
        sizeof(Student)
    );
    fin.close();
    cout << "\nStudent Data from File:\n";
    s2.display();
    return 0;
}