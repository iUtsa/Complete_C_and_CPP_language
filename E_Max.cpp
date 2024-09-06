#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,maax;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maax=a[0];
    for(int i=1;i<n;i++){
        maax=max(maax,a[i]);
    }
    cout<<maax;


}