#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int lastElement = vec[vec.size() - 1];
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        vec[i] = vec[i - 1];
    }
    vec[0] = lastElement;
    for (auto val : vec)
    {
        cout << val << " ";
    }
    return 0;
}