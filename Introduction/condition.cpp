#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a value: ";
    cin >> a;
    if (a > 10)
    {
        cout << "a is greater then 10";
    }
    else if (a == 10)
    {
        cout << "a is equal to 10";
    }
    else
    {
        cout << "a is less then 10";
    }
    return 0;
}