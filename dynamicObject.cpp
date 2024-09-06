#include<bits/stdc++.h>
using namespace std;

class Arnab{
    public: 
    int roll;
    int mark;
    int lol;

    Arnab(int r, int m, int l){
        this->roll=r;
        this->mark=m;
        this->lol=l;
    }
};

Arnab* student(){
    Arnab* s=new Arnab(01,1182,100);
    return s;
}

int main(){
    
    Arnab* p=student();
    cout<<p->roll<<" "<<p->mark<<" "<<p->lol<<" "<<endl;
    delete p;
    return 0;
}