#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stc;
    stc.push(1);
    stc.push(1);
    stc.push(1);
    cout << stc.size();
    return 0;
}