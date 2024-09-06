#include<bits/stdc++.h>
using namespace std;


class Student{
    public:

    string name;
    int cls;
    char sec;
    int id;
    int mathmark;
    int engmark;
};

bool comp(Student a,Student b){
    if(a.engmark!=b.engmark){
        return a.engmark>b.engmark;
    }else if(a.mathmark!=b.mathmark){
        return a.mathmark>b.mathmark;
    }else{
        return a.id<b.id;
    }
}
int main(){
    
    int n;
    cin>>n;
    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].cls>>s[i].sec>>s[i].id>>s[i].mathmark>>s[i].engmark;
    }

    sort(s,s+n,comp);

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].sec<<" "<<s[i].id<<" "<<s[i].mathmark<<" "<<s[i].engmark<<endl;
    }
    return 0;
}