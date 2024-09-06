#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    stringstream ss(s);

    string j="Jessica";
    string word;
    bool test=false;

    while(ss>>word){
        if(word==j){
            test=true;
            break;
        }else{
            test=false;
        }
    }

    if(test==true){
        cout<<"YES"<<endl;
    }else if(test==false){
        cout<<"NO"<<endl;
    }

    
    return 0;
}