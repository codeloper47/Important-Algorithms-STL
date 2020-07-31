#include <iostream>
#include <algorithm>
using namespace std;

// Find Function

int main() {
    int n=5;
    int a[n] = {10,20,30,40,50};
    int value = 30;    //lets find for 30 in array
    auto it = find(a,a+n,value);  //find function returns a pointer to that prticular value we looking for if found

    int index = it - a;    // subtract base address of array from that pointer address it will give index
    cout<<index;

    // if value is not found we get index value as size of array;


    
}
