#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 3, 2, 4, 1, 6};
    int min = nums[0];
    int length = sizeof(nums) / sizeof(int);
    for (int i = 1; i < length; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    cout << min << " is the smallest number";
    return 0;
}