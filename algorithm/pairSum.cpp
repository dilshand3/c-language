#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 11;
    int i = 0, j = vec.size() - 1;
    while (i <= j)
    {
        int currentSum = vec[i] + vec[j];
        if (currentSum == target)
        {
            cout << i << " " << j << " " << endl;
            return 0;
        }
        else if (currentSum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}