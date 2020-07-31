#include <iostream>
#include <algorithm>
using namespace std;

// binary_search

int main() {
    int n=5;
    int a[n] = {25,45,77,98,120};
    if( binary_search(a,a+n,98) ){
        cout<<"element present";
    }else{
        cout<<"element not present";
    }
    
}
