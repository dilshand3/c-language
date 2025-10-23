#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter day value: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    default:
        cout << "invalid value";
    }
    return 0;
}