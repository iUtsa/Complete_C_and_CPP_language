#include<iostream>
#include<algorithm> //this header file is to use following functions
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    //int mm=min(a,b);//if only two
    int mn=min({a,b,c,d}); //use curly braces for multiple
    int mx=max({a,b,c,d});

    cout<<mn<<" "<<mx<<endl;
    return 0;
}