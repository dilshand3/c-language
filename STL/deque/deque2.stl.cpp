#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);
    for (int val : d)
    {
        cout << val << " ";
    }
    return 0;
}