#include <iostream>
using namespace std;

int main()
{
    int i = 1, N, currentSum = 0;
    cout << "Enter N value: ";
    cin >> N;
    while (i <= N)
    {
        currentSum += i;
        i++;
    }
    cout << currentSum;
    return 0;
}