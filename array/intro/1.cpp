#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int N = sizeof(nums) / sizeof(int);
    for (int i = 0; i < N; i++)
    {
        cout << nums[i] << "\n";
    }
    return 0;
}