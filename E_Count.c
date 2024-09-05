#include<stdio.h>
#include<string.h>
int main(){


    // 0 ASCII is 48 and 9 is 58
    char a[1000001];
    scanf("%s",a); // no need of & for string
    int sum=0;
    for(int i=0;i<strlen(a);i++){

        sum=sum+(a[i]-'0');


    }
    printf("%d",sum);
    return 0;
}