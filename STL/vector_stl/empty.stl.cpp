#include <iostream>
#include <vector>
using namespace std;

//This method return us true if the vector is empty & false if vector have any registered value.
int main()
{
    vector<int> vec;
    cout << boolalpha << vec.empty();
    return 0;
}