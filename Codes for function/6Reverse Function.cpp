#include <iostream>
#include <algorithm>
using namespace std;

// reverse function

int main() {
    int n=5;
    int a[n]={4,7,2,99,45};
    reverse(a,a+n);
    for(auto v:a){
        cout<<v<<" ";
    }
    
}
