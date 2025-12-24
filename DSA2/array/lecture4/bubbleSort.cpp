#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {5, 2, 4, 3, 1};
    int n = sizeof(nums) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}