#include <iostream>
#include <algorithm>
using namespace std;

// Defining Our Structure
struct student {
    string name;
    string sub;
    int marks;
};

//Comparator
bool compare(struct student s1,struct student s2){
    return s1.marks>s2.marks;
}

int main() {
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].sub>>s[i].marks;
    }

    //using comparator in sort function
    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" - "<<s[i].sub<<" - "<<s[i].marks<<endl;
    }
    
}
