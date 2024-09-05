#include<stdio.h>
int main(){

    //note:
    /*
    in ASCII A-Z is (int)65 to 96
    and    a-z is (int)97 to 122

    */

     char a;
     int ans;
     scanf("%c", &a);
     if(a>=97 && a<=122){    // also:  (a>='a' && a<='z')
        ans=a-32;
        a=ans;
        printf("%c",a);
     }else if(a>=65 && a<=96){
        ans=a+32;
        a=ans;
        printf("%c",a);
     }

    return 0;
}