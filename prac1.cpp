#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int roll;
    int marks;
};
bool cmp(Student a,Student b){

    if(a.marks>=b.marks){
        return true;
    }else{
        return false;
    }
}
int main(){
    
    int n;
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    }

    sort(s,s+n,cmp);

    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
        if(s[i].marks==s[j].marks){
            if(s[i].roll>s[j].roll){
                swap(s[i],s[j]);
            }
        }
    }
    }

    
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }


    return 0;
}