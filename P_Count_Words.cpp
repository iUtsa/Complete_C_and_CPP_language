#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    //stringstream ss(s); //s>>ss means s gives everything to ss

    int wordCount=0;
    
    bool found=false;

    for(char c:s){
        if(isalpha(c)){ //first letter is alphabet or not
            if(found==false){ //if alpha and found is false then we count as there is alphabet
                wordCount++;
                
            }
            found=true; //we make found true,so that we do not need to count for the rest of the alphabet of a word
        }else{   //if no alphabet found
            //if(found=true){ //we simply make found false  and do not count word
                found=false;
            }
        }
    
    



    cout<<wordCount;
    return 0;
}