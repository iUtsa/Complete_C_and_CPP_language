#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    char name[100];
    int roll;
    char section;
    float math_marks;
    int cls;

    Student(char n[100],int rol,char sec, float mm,int cl){
        strcpy(this->name,n); //need to remember that
        this->roll=rol;
        this->section=sec;
        this->math_marks=mm;
        this->cls=cl;


    }

};
int main(){
    char name1[100];
    cin.getline(name1,100);
    char name2[100];
    cin.getline(name2,100);
    char name3[100];
    cin.getline(name3,100);

    Student *a=new Student(name1,01,'D',99.5,10);
    Student *b=new Student(name2,01,'A',98.25,10);
    Student *c=new Student(name3,07,'D',100,10);

    float maax=max(a->math_marks,b->math_marks);
    float fmax=max(c->math_marks,maax);

    if(fmax==a->math_marks){
        cout<<a->name;
    }else if(fmax==b->math_marks){
        cout<<b->name;
    }else{
        cout<<c->name;
    }
    

    
    return 0;
}