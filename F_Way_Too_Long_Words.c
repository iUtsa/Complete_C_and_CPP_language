#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    char s[101];

    for(int i=1;i<=n;i++){

        
        scanf("%s",s);

        if(strlen(s)<=10){
            printf("%s\n",s);
        }else if(strlen(s)>10){
            int sz=strlen(s)-2;

            printf("%c%d%c\n",s[0],sz,s[strlen(s)-1]);
        }
        
    }
    return 0;
}