#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> table;
    table[1] = "dilshan";
    table[2] = "apurva";
    table[3] = "nikhil";
    for (auto val : table)
    {
        cout << val.first << ": " << val.second << endl;
    }
    return 0;
}