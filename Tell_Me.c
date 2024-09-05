#include<stdio.h>
#include<string.h>
int main(){

    int test,n,count;
    scanf("%d",&test);
    

    for(int i=0;i<test;i++){
        scanf("%d",&n);

        int a[n];
        
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int x;
        scanf("%d",&x);
        for(int i=0;i<n;i++){
            if(a[i]==x){
                count=1;
                break;
                
            }else if(a[i]!=x){
                count=0;
                
            }
        }
        if(count==1){
            printf("YES");
        }else if(count==0){
            printf("NO");
        }
        printf("\n");
    }
    
    return 0;
}