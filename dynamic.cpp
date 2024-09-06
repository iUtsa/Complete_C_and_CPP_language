#include<bits/stdc++.h>
using namespace std;
int * arnab(){   //this means this function returns pointer

    int *a=new int;
    *a=100;
    return a;
}

int main(){

    int x=10; //makes static memory for x ,size 4 bytes
    //"new" keyword to use dynamic memory
    // new  datatype : new int;

    int *a= new int; //making dynamic memory for pointer
    *a=10;

    cout<<a<<endl;  //a is a pointer so it gives address
    cout<<*a<<endl;  //gives value of a

    cout<<arnab()<<endl;
    cout<<*arnab()<<endl;
    return 0;
}