#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    int min=a[0];
    int minIndex=0;
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            minIndex=i;
        }
    }
    printf("%d %d",min,minIndex+1);
    return 0;
}