#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stc;
    stc.push(1);
    stc.push(2);
    stc.push(3);
    stc.push(4);
    while (!stc.empty())
    {
        cout << stc.top() << " ";
        stc.pop();
    }

    return 0;
}