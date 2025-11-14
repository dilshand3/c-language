#include <iostream>
#include <string>
using namespace std;

bool isPelindrome(string str)
{
    int low = 0, high = str.length() - 1;
    while (low < high)
    {
        if (!isalpha(str[low]))
        {
            low++;
            continue;
        }
        if (!isalnum(str[high]))
        {
            high--;
            continue;
        }
        if (tolower(str[low]) != tolower(str[high]))
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << boolalpha << isPelindrome(str);
    return 0;
}