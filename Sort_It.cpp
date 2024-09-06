#include<bits/stdc++.h>
using namespace std;
class Student{
    public:

    string name;
    int cls;
    char sec;
    int id;
    int mathMarks;
    int engMarks;
    int totalmarks;
    
};

bool comp(Student a,Student b){
    if(a.totalmarks!=b.totalmarks){
        return a.totalmarks>b.totalmarks;
    }else{
        return a.id<b.id;
    }
}
int main(){
    
    int n;
    cin>>n;
    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].cls>>s[i].sec>>s[i].id>>s[i].mathMarks>>s[i].engMarks;
        s[i].totalmarks=s[i].mathMarks+s[i].engMarks;
    }

    sort(s,s+n,comp);

    

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].sec<<" "<<s[i].id<<" "<<s[i].mathMarks<<" "<<s[i].engMarks<<endl;
    }
    return 0;
}