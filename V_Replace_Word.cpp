#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
    string s;
    getline(cin,s);
    getchar();
    string ss;
    cin>>ss;
    string toss="#";

    int pos=s.find(ss);

    while(s.find(ss)!=-1){
    s.replace(pos,ss.size(),toss); //starting index,how many char, what to replace

    }

    cout<<s<<endl;;

    }


    return 0;
}