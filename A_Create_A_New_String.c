#include<stdio.h>
#include<string.h>
int main(){

    char s[1000],t[1000];
    scanf("%s%s",s,t);

    int size=strlen(s);
    int size2=strlen(t);

    printf("%d %d\n",size,size2);
    printf("%s %s\n",s,t);
    return 0;
}