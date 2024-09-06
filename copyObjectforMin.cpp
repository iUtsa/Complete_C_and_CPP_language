#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int roll;
    int mark;

    // Student(string nm, int rl,int mr){
    //     name=nm;
    //     roll=rl;
    //     mark=mr;
    // }

};
int main(){

    

    int n;
    cin>>n;
    Student st[n];

    for(int i=0;i<n;i++){
        cin>>st[i].name>>st[i].roll>>st[i].mark;
    }

    Student mn;
    mn.mark=INT_MAX;

    for(int i=0;i<n;i++){
        if(st[i].mark<mn.mark){
            mn=st[i];
        }
    }

    cout<<mn.mark<<" "<<mn.name<<endl;





    return 0;
}