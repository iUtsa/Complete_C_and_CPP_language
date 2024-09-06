#include<bits/stdc++.h>
using namespace std;
int * sort_it(int a[],int n){

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int *b=new int[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort(b,b+n,greater<int>());

    return b;

}

int main(){
    int n;
    cin>>n;
    int ar[n];

    int *a=sort_it(ar,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}