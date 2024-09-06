#include<bits/stdc++.h>
using namespace std;
int powered(int x,int n){
    
    int sum=0;
    

    
    for(int i=0;i<=n;i+=2){
        
            sum=sum+(int)pow(x,i);

        }

    if(n>=0){
        sum=sum-1;
    }
        
    
    
    return sum;
}
int main(){
    int x,n;

    cin>>x>>n;

    cout<<powered(x,n);


    return 0;
}