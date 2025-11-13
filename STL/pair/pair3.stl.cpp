#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}};
    for (auto val : vec)
    {
        cout << val.first << " " << val.second<<" ";
    }
    return 0;
}