#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {1, 9, 7, 3, 6};
    int n = sizeof(nums) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[min] > nums[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(nums[i], nums[min]);
        }
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}