#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 1, 4, 3, 10, 32, 12, 35};
    int max = nums[0];
    int length = sizeof(nums) / sizeof(int);
    for (int i = 1; i < length; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    cout << max << " is the max value";
    return 0;
}