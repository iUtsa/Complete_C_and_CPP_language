#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;

    switch(a){
        case 'a':   //means, if a=='a' then print
        cout<<"VOWEL"<<endl;
        break;
        case 'e':   //from here to the last is like else if
        cout<<"VOWEL"<<endl;
        break;
        case 'i':
        cout<<"VOWEL"<<endl;
        break;
        case 'o':
        cout<<"VOWEL"<<endl;
        break;
        case 'u':
        cout<<"VOWEL"<<endl;
        break;

        default :   //it is like else
        cout<<"consonent"<<endl;
    }
    return 0;
}