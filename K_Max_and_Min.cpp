#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,maax,miin;
    cin>>a>>b>>c;

    maax=max({a,b,c});
    
    miin=min({a,b,c});

    cout<<miin<<" "<<maax;

    return 0;
}