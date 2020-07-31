#include <iostream>
using namespace std;

struct student {
    string name;
    string sub;
    int marks;
};

int main() {
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].sub>>s[i].marks;
    }
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" - "<<s[i].sub<<" - "<<s[i].marks<<endl;
    }
    
}
