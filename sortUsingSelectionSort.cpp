#include<bits/stdc++.h>
using namespace std;
class Student{
    public:

    string name;
    int roll;
    int mark;

};
int main(){
    
    int n;
    cin>>n;

    Student st[n];

    for(int i=0;i<n;i++){
        cin>>st[i].name>>st[i].roll>>st[i].mark;
    }

    Student temp;  //same as int temp, just made a temporary object to hold data
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(st[i].mark>st[j].mark){ //we cannot compare objects, but we can property or data
                // temp=st[j];
                // st[j]=st[i];
                // st[i]=temp;

                //we also can use swap(): 
                swap(st[i],st[j]);

            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<st[i].name<<" "<<st[i].roll<<" "<<st[i].mark<<endl;
    }
    return 0;
}