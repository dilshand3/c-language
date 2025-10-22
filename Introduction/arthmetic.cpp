#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float c = a / b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;
    cout << "Sum of a and b is " << a + b << endl;
    cout << "Sub of a and b is " << a - b << endl;
    cout << "Mul of a and b is " << a * b << endl;
    cout << "div of a and b is " << c << endl;
    cout << "mod of a and b is " << a % b << endl;
    return 0;
}