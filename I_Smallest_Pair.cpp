#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++){
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    int min=INT_MAX;
    
    
    for(int i=1;i<n;i++){
        for(int j=1+i;j<=n;j++){
            
            int sum=a[i]+a[j]+(j-i);
            if(sum<min){
                min=sum;
            }
            
        }
            
    }
        cout<<min<<endl;;
    }
    

    
    
    return 0;
}