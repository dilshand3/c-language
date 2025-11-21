#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 3, 4, 5, 6};
    int n = 6;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += nums[i];
    }
    int total = n * (n + 1) / 2;
    cout << total - sum;
    return 0;
}