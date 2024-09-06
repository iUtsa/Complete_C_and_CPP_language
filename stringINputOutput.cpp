#include<iostream>
#include<string>
using namespace std;

int main(){
    char s[100];
    int a;

    cin>>a;
    //cin>>s; //so easy to input first word only!!!
    
    getchar(); 
    /*after inputting a, when we click enter
    this enter tales the getline space and
    does not let use to input the other one
    so we use geetchar() command , when we click
    enter after the first input getchar() takes that entered line
    and then we can use our getline line*/

    
    cin.getline(s,100); //fgets(s,100,stdin) same
    cout<<a<<endl;
    cout<< s << endl;
    
    return 0;
    
}