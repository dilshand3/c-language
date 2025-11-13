#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["table"] = 11;
    m["chair"] = 14;
    m["ladder"] = 9;
    m["sticks"] = 19;
    m["hammer"] = 12;
    cout << m.count("chair");
    return 0;
}