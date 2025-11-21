#include <iostream>
#include <climits>
using namespace std;

void findSecondNums(int nums[], int size)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > max1)
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] < max1 && max2 < nums[i])
        {
            max2 = nums[i];
        }
    }
    cout << max2;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    findSecondNums(nums, 6);
    return 0;
}