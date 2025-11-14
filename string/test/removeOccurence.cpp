#include <iostream>
using namespace std;

int main()
{
    string str = "ababcbcaabc";
    string subStr = "abc";
    while (str.find(subStr) < str.length())
    {
        str = str.erase(str.find(subStr), subStr.length());
    }
    cout << str;
    return 0;
}