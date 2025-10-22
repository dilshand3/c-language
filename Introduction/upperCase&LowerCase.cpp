#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout << "Enter alpha value: ";
    cin >> alpha;
    if (alpha >= 65 && alpha <= 90)
    {
        cout << "UPPERCASE alphabet";
    }
    else
    {
        cout << "lowercase alphabet";
    }
    return 0;
}