#include<stdio.h>
#include<string.h>
int main(){

    
    char s[1001];
    scanf("%s",s);
    
    int is_pal;
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){

        if(s[i]==s[strlen(s)-1-i]){
            is_pal=1;
        }else{
            is_pal=0;
            break;
        }

    }
    }
    if(is_pal==1){
        printf("YES");
    }else if(is_pal==0){
        printf("NO");
    }
    return 0;
}