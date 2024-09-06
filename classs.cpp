#include<bits/stdc++.h>
using namespace std;

class Student{
    public:    //access modifier
    char name[100];  //instance variables
    int roll;
    float cgpa;  //group making 
};
int main(){
    
    Student a,b; //object making
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa; //objects property
    getchar();
    cin.getline(b.name,100);
    
    cin>>b.roll>>b.cgpa;
    
    

    

    cout<<b.name<<endl<<b.cgpa<<endl<<b.roll<<endl;
    

    
    return 0;
}