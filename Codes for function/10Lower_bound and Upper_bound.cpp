#include <iostream>
#include <algorithm>
using namespace std;

// lower_bound and upper_bound returns pointer of that values

int main() {
    int n=6;
    int a[n] = {30,47,5,67,8,9,97,43};
    sort(a,a+n); // on sorting 5,8,9,30,43,47,67,97

    int lower_index = lower_bound(a,a+n,9) - a;  // >= key
    int upper_index = upper_bound(a,a+n,9) - a;  // > key

    cout<<lower_index<<endl;
    cout<<upper_index<<endl;
    
}
