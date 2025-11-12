#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 6;
    int low = 0, high = nums.size();
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            cout << mid;
            return 1;
        }
        else if (nums[mid] > target)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}