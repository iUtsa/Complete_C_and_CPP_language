#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){


        int num;
        char a;
        cin>>num>>a;
        string c(num,a);

        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}