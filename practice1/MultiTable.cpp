#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N value: ";
    cin >> N;
    for (int i = 1; i <= 10; i++)
    {
        int num = N * i;
        cout << num << endl;
    }
    return 0;
}