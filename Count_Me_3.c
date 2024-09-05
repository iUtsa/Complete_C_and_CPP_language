#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    char s[10001];
    int count[3]={0};

    for(int j=0;j<n;j++){
        scanf("%s",s);

        for(int i=0;i<strlen(s);i++){

        if(s[i]>='A' && s[i]<='Z'){

            count[0]++;
        }else if(s[i]>='a'&& s[i]<='z'){
            count[1]++;
        }else if(s[i]>='0'&&s[i]<='9'){
            count[2]++;
        }
        
    }
    for(int i=0;i<3;i++){
        printf("%d ",count[i]);
    }
    count[0]=0;
    count[1]=0;
    count[2]=0;
    printf("\n");
    }
    
    return 0;
}