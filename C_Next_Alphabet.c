#include<stdio.h>
int main(){

    char a;
    int next=1;
    scanf("%c",&a);
    if(a>='a' && a<'z'){
        a=a+next;
        printf("%c",a);
    }else if(a>='A' && a<'Z'){
        a=a+next;
        printf("%c",a);
    }else if(a=='z'){
        
        printf("a");

    }else if(a=='Z'){
        printf("A");
    }
    

    return 0;
}