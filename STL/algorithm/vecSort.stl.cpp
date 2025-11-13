#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 2, 4, 1};
    sort(vec.begin(), vec.end());
    for (auto val : vec)
    {
        cout << val << " ";
    }
    sort(vec.begin(), vec.end(), greater<int>());
    cout<<endl;
    for (auto val : vec)
    {
        cout << val << " ";
    }
    return 0;
}