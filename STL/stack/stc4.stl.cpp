#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.size() << endl;
    stack<int> s2;
    s2.swap(s1);//swap method use for swaping data
    cout << "s1 size: " << s1.size()<<" " << "s2 size: " << s2.size();
    return 0;
}