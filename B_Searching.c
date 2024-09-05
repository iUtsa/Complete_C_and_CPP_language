#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    long long a[n];
    
    

    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);

    }

    
    long long x;
    scanf("%lld",&x);

    int indexx=-1;
    
    
    for(int i=0;i<n;i++){
        if(x==a[i]){
            indexx=i;
            break;

        }
    }
    printf("%d",indexx);

    return 0;
}