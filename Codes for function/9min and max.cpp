#include <iostream>
#include <algorithm>
using namespace std;

// min,max

int main() {
    int a=62,b=55,c=99;
    // to find min and max of two values
    cout<<max(a,b)<<endl;
    cout<<min(b,c)<<endl;

    // to find min and max of three values

    cout<<max(a,max(b,c) )<<endl;
    cout<<min(a,min(b,c) )<<endl;
    
}
