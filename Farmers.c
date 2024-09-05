#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    int m1,m2,d;
    int f,res;

    for(int i=0;i<t;i++){
        scanf("%d%d%d",&m1,&m2,&d);

        f=(m1*d)/(m1+m2);
        res=d-f;

        if(res>0 && res<1){
            res=1;
        }
        printf("%d\n",res);
    }

    
    return 0;
}