#include <iostream>
#include <set>
using namespace std;

int main()
// Upperbond return greater value then the parameter.
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout << *(s.upper_bound(3));
    return 0;
}