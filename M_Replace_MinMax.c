#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int min=a[0];
    int min_index=0;
    for(int i=0;i<n;i++){

        if(a[i]<min){
            min=a[i];
            min_index=i;
        }
    }
    int max=a[0];
    int max_index=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            max_index=i;
        }
    }
    int temp;

    temp = a[min_index];
    a[min_index]=max;
    a[max_index]=temp;

        
    
    for(int i=0;i<n;i++){
        printf("%lld ",a[i]);
    }
    
    
    return 0;
}