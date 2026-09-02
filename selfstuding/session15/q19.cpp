#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    list<int> numbers;
    for(int i = 0; i < 10; i++)
    {
        numbers.push_back(rand() % 100);
    }
    cout << "Reverse Order:\n";
    for(auto it = numbers.rbegin();
        it != numbers.rend();
        ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = numbers.begin();
        it != numbers.end();
        ++it)
    {
        *it = *it + 5;
    }
    cout << "\nAfter Adding 5:\n";
    for(list<int>::const_iterator it =
            numbers.cbegin();

        it != numbers.cend();

        ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    numbers.sort();
    cout << "\nSorted List:\n";
    for(auto it = numbers.begin();
        it != numbers.end();++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}