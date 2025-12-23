#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(int);
    int temp = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        nums[i + 1] = nums[i];
        if (i == 0)
        {
            nums[i] = temp;
        }
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}