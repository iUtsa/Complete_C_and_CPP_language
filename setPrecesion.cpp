#include<iostream>
#include<iomanip> //means input and output manipulation
using namespace std;

int main(){
    float a,b;
    cin>> a >> b;

    if(a>b){
        cout<<"A is large"<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<b<<endl; //this is the syntax that we use to set 2 decimal points
    }

}