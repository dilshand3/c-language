#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int idx = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[idx] > nums[j])
            {
                idx = j;
            }
        }
        swap(nums[idx], nums[i]);
    }
}

int main()
{
    vector<int> vec = {5, 2, 4, 3, 1};
    for (auto val : vec)
    {
        cout << val << " ";
    }
    selectionSort(vec);
    cout << endl;
    for (auto val : vec)
    {
        cout << val << " ";
    }
    return 0;
}