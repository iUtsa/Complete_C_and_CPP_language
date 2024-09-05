#include<stdio.h>
int main(){

int a;
scanf("%d",&a);

int threeDigit = a/10;
int twoDigit= threeDigit/10;
int firstDigit=twoDigit/10;

if(firstDigit%2==0){
    printf("EVEN");
}else{
    printf("ODD");
}
    return 0;
}