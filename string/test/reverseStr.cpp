#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "dilshan";
    int low = 0, high = str.length() - 1;
    while (low < high)
    {
        swap(str[low++], str[high--]);
    }
    cout << str;
    return 0;
}