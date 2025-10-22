#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int target;
    int totalSum = 0;
    cout << "Enter target value: ";
    cin >> target;
    while (i <= target)
    {
        totalSum += i;
        i++;
    }
    cout << totalSum;
    return 0;
}