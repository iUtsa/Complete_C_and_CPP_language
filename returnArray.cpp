#include<bits/stdc++.h>
using namespace std;

int * arnab(){ //this is how we do for dynamic memory

  int *a=new int [5];
  for(int i=0;i<5;i++){
    cin>>a[i];
  }
  return a;  
}

int main(){
    //this is how we create dynamic array: 

    
    int *a=arnab();

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}