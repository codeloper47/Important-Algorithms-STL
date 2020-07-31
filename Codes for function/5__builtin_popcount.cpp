#include <iostream>
#include <algorithm>
using namespace std;

// __builtin_popcount to find number of 1's in binary value of integer

int main() {
    int n = 39;   //  binary of 39 is 100111
    cout<<__builtin_popcount(n);
    
}
