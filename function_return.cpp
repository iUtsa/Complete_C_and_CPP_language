#include<bits/stdc++.h>
using namespace std;
class Student{

    public:
    int roll;
    int clas;
    float cgpa;

    Student(int r,int cls,float cg ){ //constructor: method named as class

        this->roll=r;
        this->clas=cls;
        this->cgpa=cg;
    }
};

Student asss(){  //class name behaves like a datatype

    Student arnab(01,12,4.98); //object behaves like a variable
    return arnab;
}

int main(){
    
    Student ans= asss();
    cout<<ans.roll<<ans.clas<<ans.cgpa<<endl;
    return 0;
}