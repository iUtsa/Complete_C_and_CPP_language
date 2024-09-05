#include<stdio.h>
int main(){

    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];

    int count[m+1];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=m;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=m;i++){
        if(count[i]!=0){
        printf("%d\n",count[i]);
    }
    }


    return 0;
}