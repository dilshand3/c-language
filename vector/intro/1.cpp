#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3};
    cout << a[0] << endl; // use for loop in differt way to access all element
    for (int i : a)
    {
        cout << i << endl;
    }
    return 0;
}