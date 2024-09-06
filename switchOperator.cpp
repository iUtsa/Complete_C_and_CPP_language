#include<iostream>
using namespace std;

int main(){
    //switch can work every aspect of conditionals
    //but (x>=y),(x>y) bla bla is difficult to do here with it

    int a;
    cin>>a;

    switch(a%2){  //only here we can use condition

        case 1:
            cout<<"ONE"<<endl;
            break;
        case 2:
            cout<<"TWO"<<endl;
            break;
        case 3:
            cout<<"THREE"<<endl; //if we do not use break, it will make true after the first case goes true, so must use break
            break;
        default:
            cout<<"even"<<endl; //if no case matchs, so we use default
    return 0;
}

}