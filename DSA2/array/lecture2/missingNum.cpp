#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {1, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(int);
    int sum = 0;
    for (int val : nums)
    {
        sum += val;
    }
    int ans = (n * (n + 1)) / 2;
    cout << ans - sum;
    return 0;
}