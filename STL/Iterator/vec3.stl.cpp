#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // vector<int>::reverse_iterator itr;
    for (auto itr = vec.rbegin(); itr != vec.rend(); itr++)
    {
        cout << *(itr)<<" ";
    }
    return 0;
}