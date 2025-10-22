#include <iostream>
using namespace std;

int main()
{
    int fact = 1, N;
    cout << "Enter N value: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}