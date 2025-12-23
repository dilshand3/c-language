#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(int);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}