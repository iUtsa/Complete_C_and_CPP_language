#include<iostream>
using namespace std;

int main(){  //ternary operator is basically Short cut if else

    //it will only work once like if else
    //not else if or multiple conditions
    int a,b;
    cin>>a>>b;
    if(a%2==0){
        cout<<a<<"is even"<<endl;
    }else{
        cout<<a<<" is odd"<<endl;
    }

    //now using ternary for b

    (b%2==0)? cout<<b<<" is even"<<endl : cout<<b<<" is odd"<<endl;
    //it asks is true or false, if true will do the first work ,or the second
    
    return 0;
}