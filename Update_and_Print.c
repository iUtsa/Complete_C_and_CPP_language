#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    for(int i=0;i<n;i++){
        
            
            a[x]=v;

        
        printf("%d ",a[n-1-i]);
    }
    
    return 0;
}