#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {2, 3, 2, 4};
    reverse(vec.begin(), vec.end());
    for (auto val : vec)
    {
        cout << val << " ";
    }
    return 0;
}