#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int freq = 0, ans = 0;
    for (int val : nums)
    {
        if (ans == 0)
        {
            ans = val;
            freq = 1;
        }
        if (val == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << ans;
    return 0;
}