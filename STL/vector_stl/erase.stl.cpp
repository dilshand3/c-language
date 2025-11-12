#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (int val : vec)
    {
        cout << val << " ";
    }
    vec.erase(vec.begin() + 1, vec.begin() + 3);
    cout << "\t";
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}