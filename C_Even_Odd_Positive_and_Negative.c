#include<stdio.h>
int main(){

    int n;
    scanf("%d\n",&n);

    if(n>=1 && n<=1000){
        int a;
        int even=0;
        int odd=0;
        int pos=0;
        int neeg=0;
        for(int i=1; i<=n; i++){
            
            scanf("%d",&a);
            if(a==0 || a%2==0){
                even++;
            }
            if(a%2!=0){
                odd++;
            }
            if(a<0){
                neeg++;
            }
            if(a>0){
                pos++;
            }


        }
        printf("Even: %d\n",even);
        printf("Odd: %d\n",odd);
        printf("Positive: %d\n",pos);
        printf("Negative: %d",neeg);
    }

    
    return 0;
}