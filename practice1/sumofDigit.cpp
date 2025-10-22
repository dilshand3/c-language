#include <iostream>
using namespace std;

int main()
{
    int num = 223;
    int Sum = 0;
    while (num > 0)
    {
        int mode = num % 10;
        Sum += mode;
        num = (int)num / 10;
    }
    cout << Sum;
    return 0;
}