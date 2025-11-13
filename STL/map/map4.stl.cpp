#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.emplace(1, "dilshan");
    m.emplace(2, "apurva");
    m.emplace(3, "nikhil");
    if (m.find(2) != m.end())
    {
        cout << "existed"<<endl;
    }
    m.erase(2);
    for (auto val : m)
    {
        cout << val.second << endl;
    }
    return 0;
}