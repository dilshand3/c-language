#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    vec.pop_back();
    cout << "after pop";
    cout << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    return 0;
}