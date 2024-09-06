#include<bits/stdc++.h>
using namespace std;
class Student{
    public:

    string name;
    int roll;
    int mark;

};

bool cmp(Student a, Student b){
    if(a.mark>=b.mark){
        return true; //descending sort
    }else{
        return false;
    }
}
int main(){

    int n;
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].roll>>s[i].mark;
    }

    sort(s,s+n,cmp);

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].mark<<endl;
    }

    return 0;
}