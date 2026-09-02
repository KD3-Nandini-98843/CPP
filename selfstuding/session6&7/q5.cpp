// strlen() and str copy()
#include <iostream>
using namespace std;
int myStrlen(char str[])
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}
void myStrcpy(char destination[], char source[])
{
    int i = 0;
    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int main()
{
    char source[100];
    char destination[100];
    cout << "Enter a string: ";
    cin.getline(source, 100);
    cout << "Length = "<< myStrlen(source) << endl;
    myStrcpy(destination, source);
    cout << "Copied String = "<< destination << endl;
    return 0;
}