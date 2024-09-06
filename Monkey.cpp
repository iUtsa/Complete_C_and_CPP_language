#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100001];

    while(cin.getline(s,100001)){

        int n=0;
        int length=0;

        
        while(s[length]!='\0'){
            length++;
        }

        for(int i=0;i<length;i++){
            if(s[i]!=' '){
                s[n++]=s[i];
            }
            
        }
        
        
        sort(s,s+n);
       
       s[n]='\0';

        cout<<s<<endl;
        
    }
    return 0;
}