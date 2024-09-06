#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:

    string name;
    int id;
    float salary;

};
int main(){
    
    int n;
    cin>>n;

    Employee employe[n];

    for(int i=0;i<n;i++){
        cin>>employe[i].name>>employe[i].id>>employe[i].salary;
    }

    Employee mx;
    mx.salary=INT_MIN;

    for(int i=0;i<n;i++){
        if(employe[i].salary>mx.salary){
            mx=employe[i];
        }
    }

    cout<<mx.name<<" "<<mx.salary<<" "<<mx.id<<endl;
    return 0;
}