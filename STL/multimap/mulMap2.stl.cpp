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
    m.erase(m.find("Tv"));
    for (auto val : m)
    {
        cout << val.first << ": " << val.second << endl;
    }
    m.erase("Tv");
    // after deleting all the key
    cout << "After deleting all the key."<<endl;
    if (!m.empty())
    {
        for (auto val : m)
        {
            cout << val.first << ": " << val.second << endl;
        }
    }
    else
    {
        cout << "key not found.";
    }

    return 0;
}