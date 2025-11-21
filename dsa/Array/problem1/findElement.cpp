#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 4;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            cout << "found on " << i;
            return 0;
        }
    }
    cout << "not found";
    return 0;
}