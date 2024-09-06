#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pal=1;
    for(int i=0;i<n;i++){
        if(a[i]==a[n-1-i]){
            pal=1;
        }else{
            pal=0;
            break;
        }
    }

    if(pal==1){
        cout<<"YES";
    }else if(pal==0){
        cout<<"NO";
    }
    return 0;
}