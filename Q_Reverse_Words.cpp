#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;

    int j=-1;
    int cWord;
    while(ss>>word){
        
        cWord++;

        for(int i=0;i<word.size();i++){
            cout<<word[word.size()-1-i];
        }
        
        j++;
        if(j<cWord){
            cout<<" ";
        }
    }
    return 0;
}