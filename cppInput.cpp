#include<iostream>

using namespace std; //this is a group for std, we do not need to write std anymore if we use this line
int main(){
    int a,b,c;
    cin>>a;
    cout<<a<<endl; //no need to write std anymore, as we used namespace group 
    //using << many times gives us multiple output

    //same >> gives us mmultiple input

    cin >> b >> c; //multiple inputs
    cout<<b<<endl<<c<<endl; //output using new line


    //to find ascii of a chaaracter

    char cc;
    cin>>cc;
    int ascii=cc; //type casting: changing type of a variable
    cout<<ascii<<endl;

    //also works like this without declaring new variable
    char cd;
    cin>>cd;
    cout<<int(cd)<<endl; //also a typecasting

    /* Typecasting: changing type of a variable
    
    long long int ---> int
    char ----> int
    float/double --->int 
    */ 
}