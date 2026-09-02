#include <iostream>
#include <memory>
using namespace std;
class Student
{
public:
    Student()
    {
        cout << "Student Created" << endl;
    }
    ~Student()
    {
        cout << "Student Destroyed" << endl;
    }
};
int main()
{
    cout << "\nUnique Pointer:\n";
    unique_ptr<Student> p1 = make_unique<Student>();
    cout << "\nShared Pointer:\n";
    shared_ptr<Student> p2 = make_shared<Student>();
    shared_ptr<Student> p3 = p2;
    cout << "Shared Count: "<< p2.use_count() << endl;
    cout << "\nWeak Pointer:\n";
    weak_ptr<Student> p4 = p2;
    cout << "Shared Count: "<< p2.use_count() << endl;
    return 0;
}