#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

    
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int even=0;
    int odd=0;
    int operation;
    if(n%2!=0){
        cout<<-1;
    }else{
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }

        int req=n/2;
        int diff=abs(even-odd);
        cout<<diff/2<<endl;
    }

    }
    return 0;
}