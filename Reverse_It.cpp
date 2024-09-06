#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int cls;
    char sec;
    int id;


};
int main(){
    
    int n;
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].cls>>s[i].sec>>s[i].id;
    }

    for(int i=0;i<n/2;i++){
        char temp;
        temp=s[n-1-i].sec;
        s[n-1-i].sec=s[i].sec;
        s[i].sec=temp;
    }

    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].sec<<" "<<s[i].id<<endl;
    }
    return 0;
}