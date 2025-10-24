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
    vec.push_back(2);
    cout << "new vector";
    cout << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    return 0;
}