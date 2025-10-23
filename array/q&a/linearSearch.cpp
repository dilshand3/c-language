#include <iostream>
using namespace std;

int LinearSearch(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            cout << i;
            return 0;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int n = (sizeof(nums) / sizeof(int));
    LinearSearch(nums, n, 4);
    return 0;
}