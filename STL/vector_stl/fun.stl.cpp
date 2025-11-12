#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    cout << vec[2] << " " << vec.at(2)<<endl;
    cout << vec.front()<<endl;
    cout << vec.back();
    return 0;
}