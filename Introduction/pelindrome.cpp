#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "racecar";
    int low = 0, high = str.length() - 1;
    while (low < high)
    {
        if (str[low] != str[high])
        {
            cout << boolalpha << false;
            return 0;
        }
        low++;
        high--;
    }
    cout << boolalpha << true;
    return 0;
}