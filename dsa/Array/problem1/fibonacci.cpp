#include <iostream>
using namespace std;

void fibonacciSeq(int first, int second, int n)
{
    if (n <= 0)
    {
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        int third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
}

int main()
{
    int n = 7;
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    fibonacciSeq(first, second, n - 2);
    return 0;
}