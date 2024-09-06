#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int *a=new int[3];
    int *b=new int[3]; //making one temporary array

    for(int i=0;i<3;i++){

        cin>>a[i];
        b[i]=a[i];  //copying value from one to another array

    }
    

    

    delete[] a;

    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";  //testing if it is correct
    }
    a=new int[5]; //increasing size of a from 3 to 5

    for(int i=0;i<3+2;i++){ //i want to add two more values
         
         if(i<3){
            a[i]=b[i]; //returning the value we copied
         }else{
            cin>>a[i];  //inputing  new values
         }
    }
    cout<<endl;

    delete[] b; //deleting b as we do not need it anymore

    for(int i=0;i<3+2;i++){
        cout<<a[i]<<" ";
    }


}
