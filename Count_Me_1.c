#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count[2]={0}; //0 for 2  and 1 for 3


    for(int i=0;i<n;i++){

        if(a[i]%2==0){
            count[0]++;
        }else if(a[i]%2==0 && a[i]%3==0){
            count[0]++;
        }else if(a[i]%3==0){
            count[1]++;
        }
    }

    for(int i=0;i<2;i++){
        printf("%d ",count[i]);
    }
    return 0;
}