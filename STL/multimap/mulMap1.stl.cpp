#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> m;
    m.emplace("Tv", 100);
    m.emplace("Tv", 100);
    m.emplace("Tv", 100);
    m.emplace("Tv", 100);
    for (auto val : m)
    {
        cout << val.first << ": " << val.second << endl;
    }
    return 0;
}