#include<stdio.h>
int main(){

    int n,v;
    scanf("%d",&n);
    int posSum=0;
    int negSum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&v);

        if(v>0){
            posSum=posSum+v;
        }else{
            negSum=negSum+v;
        }

    }
    printf("%d %d",posSum,negSum);
    return 0;
}