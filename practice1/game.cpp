#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    double num = static_cast<double>(rand()) / RAND_MAX;
    cout << num << endl;
}
