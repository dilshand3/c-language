#include <iostream>
using namespace std;

void reverseArray(int nums[], int n)
{
    int low = 0, high = n - 1;
    int third;
    while (low < high)
    {
        third = nums[low];
        nums[low] = nums[high];
        nums[high] = third;
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int n = (sizeof(nums) / sizeof(int));
    reverseArray(nums, n);
    return 0;
}