#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    

for(int i=0;i<t;i++){
    string s,x;
    getline(cin,s);
    getline(cin,x);



    int index=s.find(x);

    while(index!=-1){
        s.replace(index,x.size(),"#");
        index=s.find(x,index+1);
        
    }

    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;

    }
    return 0;
}