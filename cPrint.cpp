#include <iostream> //instead of <stdio.h> in c

int main(){

    std::cout<<"I am utsa\n"; //to print something, std is a group
    int a=10;
    long long int b=1000000000;
    float c=1.23;
    double d=3.141592;
    char cc='a';
//same as C

    //in c++ there is no format spacifier ;ike %d,%c,%lf etc
    //use only variable like java

    std::cout<< a<<"\n"; //print a variable and new line
    std::cout<<"My fav number is "<<a<<"\n"; //variable with string in a line 
    //in java we use + sign to deffer variable and string
    //here use << to differentiate variable and string

    std::cout<<"my "<<a<<" fav number\n";

    std::cout<<a<<"\n"<<b<<std::endl; //printing two variable with space in middle

    //instead of "\n" for new line we can use
    // std::endl; at the last to specify new line

    std::cout<<d<<" "<<cc<<std::endl;
    std::cout<<d<<std::endl<<" is grater than "<<std::endl<<c<<std::endl;

    return 0;
}