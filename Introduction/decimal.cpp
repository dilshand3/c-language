#include <iostream>
using namespace std;

int decimalTobinary(int decimalNum)
{
    int ans, pow = 1;
    while (decimalNum > 0)
    {
        int rem = decimalNum % 2;
        decimalNum = decimalNum / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    int decimalNum;
    cout << "Enter decimalNum: ";
    cin >> decimalNum;
    cout << decimalTobinary(decimalNum);
    return 0;
}