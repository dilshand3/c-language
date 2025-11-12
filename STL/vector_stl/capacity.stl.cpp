#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << vec.capacity() << endl;
    vec.push_back(1);
    cout << vec.capacity() << endl;
    vec.push_back(2);
    cout << vec.capacity() << endl;
    vec.push_back(3);
    cout << vec.capacity() << endl;
    vec.push_back(4);
    cout << vec.capacity() << endl;
    vec.push_back(5);
    cout << vec.capacity() << endl;
    return 0;
}