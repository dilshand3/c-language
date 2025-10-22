#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age value> ";
    cin >> age;
    cout << ((age == 19) ? ("more 19") : ("less then 19"));
    return 0;
}