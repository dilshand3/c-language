#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> vec = {{4, 1}, {6, 2}, {5, 3}};
    sort(vec.begin(), vec.end());
    for (auto val : vec)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}

