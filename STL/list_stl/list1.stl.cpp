#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> a_list = {1, 2, 3, 4};
    for (int val : a_list)
    {
        cout << val << " ";
    }
    return 0;
}