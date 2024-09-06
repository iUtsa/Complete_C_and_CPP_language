#include<bits/stdc++.h>
using namespace std;

class Student{
    
    public:
    int roll;
    int cls;
    float cgpa;

    Student(int r,int c, float cg){ //constructor

        this->roll=r;  //(*this) or this-> is same: dereferancing
        this->cls=c;
        this->cgpa=cg;
    }
}; //must

int main(){
    
    Student a(2,11,4.00);
    Student Arnab(01,12,5.00);

    
    cout<<a.roll<<" "<<a.cls<<" "<<a.cgpa<<endl;
    return 0;
}