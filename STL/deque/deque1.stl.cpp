#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    deque<int> a_deque = {1, 2, 3, 4};
    for (int val : a_deque)
    {
        cout << val << " ";
    }
    return 0;
}