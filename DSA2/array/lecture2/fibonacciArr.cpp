#include <iostream>
using namespace std;

int main()
{
    int nums[7] = {0, 1};
    for (int i = 2; i < 7; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}