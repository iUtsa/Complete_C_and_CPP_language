
// < less than > grater than
// <= less than or equal
// >== grater than or equal
// && and (both should be true)
// || or (one of them can be true)
// a%b= mod or remainder
// == equal to
// != not equal to

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);

    if(a+b==11 && a-b==11){
        printf("correct");

    }else{
        printf("Bruh");
    }
    return 0;
}