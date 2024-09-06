#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int roll;
    int marks;

};

int main(){

    int n;
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    }

    for(int i=0;i<n/2;i++){
        Student temp;
        temp=s[n-1-i];
        s[n-1-i]=s[i];
        s[i]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    
    return 0;
}