#include <iostream>
#include <string>
using namespace std;

bool isAlpha(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

int main()
{
    string str = "DilShaN";
    int low = 0, high = str.length() - 1;
    while (low < high)
    {
        if (!isAlpha(str[low]))
        {
            low++;
            continue;
        }
        if (!isAlpha(str[high]))
        {
            high--;
            continue;
        }
        if (tolower(str[low]) != tolower(str[high]))
        {
            cout << "false pelindrome";
            return 0;
        }
        low++;
        high--;
    }
    cout << "valid pelindrome";
    return 0;
}