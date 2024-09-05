#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d",&n);
    long long a[n];

    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        
        
        
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        
        
        sum=sum+a[i];

    }
    if(sum<0){
        sum=sum*(-1);
    }
    printf("%lld",sum);
    
    return 0;
}