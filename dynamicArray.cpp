#include<bits/stdc++.h>
using namespace std;

int main(){
    //this is how we create dynamic array: 

    int *a=new int[5]; //dynamic array size 5
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    return 0;
}