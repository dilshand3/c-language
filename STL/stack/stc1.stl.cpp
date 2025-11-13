#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stc;
    stc.push(1);
    stc.push(2);
    stc.push(3);
    cout << stc.top() << endl;
    cout << boolalpha << stc.empty();
    return 0;
}