//sort using sort() function

#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //to sort we have to give starting pointer and ending pointer of a list
    //it will sort before the endig pointer

    //ascending sort
    sort(a,a+n); //a is first index pointer as the name of array is the first index pointer, a+n is last
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //descendibg sort
    sort(a,a+n, greater<int>()); //syntax of descending sort
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}