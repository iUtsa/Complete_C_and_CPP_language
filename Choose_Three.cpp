#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int no=0;
    for(int i=0;i<n-2;i++){
        for(int j=1+i;j<n-1;j++){
            for(int k=j+1;k<n;k++){
            if(a[i]+a[j]+a[k]==s){
                no=1;
                cout<<"YES"<<endl;
                break;
            }
            
            }
            if(no==1){
                break;
            }
         }
         if(no==1){
            break;
         }
    }
    if(no==0){
         cout<<"NO"<<endl;
        }
}

    
    
    return 0;
}