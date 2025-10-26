#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// total subArray = (n*(n+1))/2
int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(int);
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << maxSum;
    return 0;
}