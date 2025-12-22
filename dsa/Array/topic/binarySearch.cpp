#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6,7};
    int low = 0, high = vec.size() - 1;
    int target = 5;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (target == vec[mid])
        {
            cout << "target found on " << mid;
            return 0;
        }
        else if (target < vec[mid])
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