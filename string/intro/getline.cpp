#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter something: ";
    cin.getline(str, 100, '.');
    cout << str;
    return 0;
}