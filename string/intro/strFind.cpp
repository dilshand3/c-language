#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "dilshan";
    cout << str.find("sh") << endl;
    cout << boolalpha << (str.find("k") < str.length() ? true : false);
    return 0;
}