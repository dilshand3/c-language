#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N value: ";
    cin >> N;
    int num1 = 0, num2 = 1;
    cout << num1 << "\t";
    cout << num2 << "\t";
    for (int i = 3; i <= N; i++)
    {
        int NextNum = num1 + num2;
        cout << NextNum << "\t";
        num1 = num2;
        num2 = NextNum;
    }
    return 0;
}