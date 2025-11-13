#include <iostream>
#include <Set>
using namespace std;

int main()
// Lowerbound return equal or greater value then the parameter.
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout << *(s.lower_bound(3));
    return 0;
}