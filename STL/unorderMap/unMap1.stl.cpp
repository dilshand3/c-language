#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // its doesn't store data in sorting formate
    unordered_map<string, int> m;
    m.emplace("Television", 10);
    m.emplace("Laptop", 10);
    m.emplace("Tablet", 10);
    m.emplace("Mobile", 10);
    for (auto val : m)
    {
        cout << val.first << ": " << val.second << endl;
    }
    return 0;
}