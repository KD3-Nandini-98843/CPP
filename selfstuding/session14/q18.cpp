#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
    T *arr;
    int size;
public:
    Array(int s)
    {
        size = s;

        arr = new T[size];
    }
    ~Array()
    {
        delete[] arr;
    }
    void accept()
    {
        for(int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    T& operator[](int index)
    {
        return arr[index];
    }
};
int main()
{
    Array<int> a(5);
    cout << "Enter 5 numbers:\n";
    a.accept();
    cout << "Array elements:\n";
    a.display();
    a[0] = 100;
    cout << "Modified Array:\n";
    a.display();
    return 0;
}