#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int low = 0;
    int n = sizeof(nums) / sizeof(int);
    int high = n - 1;
    while (low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}