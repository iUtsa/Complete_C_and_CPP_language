#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max,min;

    if(a<=b && a<=c){
         min=a;

        printf("%d ",min);
    }else if(b<=a && b<=c){
         min=b;
        printf("%d ",min);
    }else{
         min=c;
         
        printf("%d ",min);

    }

    if(a>=b && a>=c){
         max=a;

        printf("%d",max);
    }else if(b>=a && b>=c){
         max=b;
        printf("%d",max);
    }else {
         max=c;
         
        printf("%d",max);

    }


    return 0;
}