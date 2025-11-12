#include <iostream>
using namespace std;

int main()
{
    pair<string, pair<int, int>> p = {"dilshan", {1, 2}};
    cout << p.first << endl;
    cout << p.second.second;
    return 0;
}