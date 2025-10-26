#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {3, 2, 3};
    int count = 0, ans = 0;
    for (int val : vec)
    {
        if (count == 0)
        {
            ans = val;
            count = 1;
        }
        if (val == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << ans << " " << count;
    return 0;
}

// brute force approach
//   for (int i = 0; i < vec.size(); i++)
//      {
//          int count = 1;
//          for (int j = i + 1; j < vec.size(); j++)
//          {
//              if (vec[i] == vec[j])
//              {
//                  count++;
//              }
//          }
//          if (vec.size() / 2 < count)
//          {
//              cout << count << " " << vec[i];
//              return 0;
//          }
//      }