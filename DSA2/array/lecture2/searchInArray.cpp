#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1,2,3,4,5};
    int x = 4;
    int n = sizeof(nums)/sizeof(int);
    for(int i = 0;i<n;i++){
        if(nums[i] == x){
            cout<<i<<" idx";
            break;
        }
    }
    return 0;
}