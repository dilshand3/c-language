#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec(3, "dilshan");
    for (string i : vec)
    {
        cout << i << endl;
    }
    return 0;
}