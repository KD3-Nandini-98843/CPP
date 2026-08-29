#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int seconds;
public:
    Time()
    {
        hour = 0;
        minute = 0;
        seconds = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        seconds = s;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSeconds()
    {
        return seconds;
    }
    void setHour(int h)
    {
        hour = h;
    }
    void setMinute(int m)
    {
        minute = m;
    }
    void setSeconds(int s)
    {
        seconds = s;
    }
    void printTime()
    {
        cout << hour << ":" << minute << ":" << seconds << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Time: ";
    cin >> n;
    Time *arr = new Time[n];
    int count = 0;
    int choice;
    do
    {
        cout << "1. Add Time"<<endl;
        cout << "2. Display All Time"<<endl;
        cout << "3. Display Only Hours"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                if(count < n)
                {
                    int h, m, s;
                    cout << "Enter hour: ";
                    cin >> h;
                    cout << "Enter minute: ";
                    cin >> m;
                    cout << "Enter seconds: ";
                    cin >> s;
                    arr[count] = Time(h, m, s);
                    count++;
                    cout << "Time added" << endl;
                }
                else
                {
                    cout << "No Time Added" << endl;
                }
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    cout << "No time " << endl;
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << "Time " << i + 1 << ": ";
                        arr[i].printTime();
                    }
                }
                break;
            }
            case 3:
            {
                if(count == 0)
                {
                    cout << "No time available" << endl;
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << "Time " << i + 1 << " Hour: ";
                        cout << arr[i].getHour() << endl;
                    }
                }
                break;
            }
            case 4:
            {
                cout << "Exit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
            }
        }
    } while(choice != 4);
    delete[] arr;
    return 0;
}