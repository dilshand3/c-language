#include <iostream>
using namespace std;

// pointer are special variable that store other variable address.
int main()
{
    int a = 100;
    int *ptr = &a; // * at the begging is used for create pointer variable.
    cout << ptr << "\n";
    // pointer to pointer variable basically a pointer store another pointer address.
    cout << "pointer to pointer variable\n";
    int **ptr2 = &ptr;
    cout << ptr2;
    return 0;
}