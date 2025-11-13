#include <iostream>
#include <queue>
using namespace std;

//in this PQ max will be on the top.
int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}