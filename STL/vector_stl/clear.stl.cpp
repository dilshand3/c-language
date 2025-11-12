#include <iostream>
#include <vector>
using namespace std;

//Clear method remove all the value from vector but capacity will be same.
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vec.clear();
    cout << vec.capacity()<<endl;
    cout << vec.size();
    for (int val : vec)
    {
        cout << val;
    }
    return 0;
}