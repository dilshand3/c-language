#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.emplace(1, "dilshan");
    m.insert({2, "apurva"});
    for (auto val : m)
    {
        cout << val.second << endl;
    }
    return 0;
}