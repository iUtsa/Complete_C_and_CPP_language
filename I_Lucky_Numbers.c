#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    
    int first,last;
    first=n/10;
    last=n%10;
        
        if((last!=0 && first%last == 0 ) || (first!=0 && last%first==0)){
            printf("YES");
        }else{
            printf("NO");
        }
        
    
    return 0;
}