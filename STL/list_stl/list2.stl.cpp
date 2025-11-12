#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l_list;
    l_list.push_back(5);
    l_list.push_back(4);
    l_list.push_front(1);
    l_list.push_front(2);
    for (int val : l_list)
    {
        cout << val << " ";
    }
    l_list.pop_back();
    l_list.pop_front();
    cout << endl;
    for (int val : l_list)
    {
        cout << val << " ";
    }
    return 0;
}