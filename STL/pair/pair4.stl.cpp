#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}};
    vec.push_back({3, 4});//use {} if use push_back
    vec.emplace_back(3, 4);//doestn't need {} if use emplace_back
    cout << vec[1].first;//access 1 index first value
    for (auto val : vec)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}