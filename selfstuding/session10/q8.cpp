#include <iostream>
using namespace std;
class Programmer
{
    private:
        int programmer_id;
    public:
        Programmer()
        {}
        void acceptProgrammerDetails()
        {
            cout << "Enter Programmer ID: ";
            cin >> programmer_id;
        }
        void displayProgrammerDetails()
        {
            cout << "Programmer ID: " << programmer_id << endl;
        }
        void work()
        {
            cout << "Programmer writes code" << endl;
        }
};
class Teacher
{
    private:
        int teacher_id;
    public:
        Teacher()
        {}
        void acceptTeacherDetails()
        {
            cout << "Enter Teacher ID: ";
            cin >> teacher_id;
        }
        void displayTeacherDetails()
        {
            cout << "Teacher ID: " << teacher_id << endl;
        }
        void work()
        {
            cout << "Teacher teaches students" << endl;
        }
    };

class ProgrammingTeacher : public Programmer, public Teacher
{
    private:
        string programming_lang;
        int programming_id;
    public:
        ProgrammingTeacher()
        {}
        void acceptDetails()
        {
            cout << "Enter Programming Language: ";
            cin >> programming_lang;
            cout << "Enter Programming ID: ";
            cin >> programming_id;
        }
        void displayDetails()
        {
            cout << "ProgrammingTeacher Details" << endl;
            cout << "Programming Language: "<< programming_lang << endl;
            cout << "Programming ID: "<< programming_id << endl;
        }
};

int main()
{
    ProgrammingTeacher pt;
    cout << "Enter Details" << endl;
    pt.acceptProgrammerDetails();
    pt.acceptTeacherDetails();
    pt.acceptDetails();
    cout << "Display Details" << endl;
    pt.displayProgrammerDetails();
    pt.displayTeacherDetails();
    pt.displayDetails();
    cout << "Work Details" << endl;
    pt.Programmer::work();
    pt.Teacher::work();
    return 0;
}