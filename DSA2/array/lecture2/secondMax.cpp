#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[6] = {2, 4, 6, 6, 1, 5};
    int max = INT_MIN;
    int Smax = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] > max)
        {
            Smax = max;
            max = nums[i];
        }
        else if (nums[i] > Smax && nums[i] != max)
        {
            Smax = nums[i];
        }
    }
    cout << Smax;
    return 0;
}