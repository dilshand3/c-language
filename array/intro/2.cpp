#include <iostream>
using namespace std;

int main()
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " value: ";
        cin >> nums[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << "\t";
    }
    return 0;
}