#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[101];
    char section;
    int total_marks;

    

};
int main(){
    
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        


        Student s1,s2,s3;
        cin>>s1.id>>s1.name>>s1.section>>s1.total_marks;

        
        cin>>s2.id>>s2.name>>s2.section>>s2.total_marks;

        
        cin>>s3.id>>s3.name>>s3.section>>s3.total_marks;

        int maax=max(s1.total_marks,s2.total_marks);

        int fmax = (s3.total_marks > maax) ? s3.total_marks : maax;


        if((fmax==s1.total_marks  && fmax==s2.total_marks)|| (fmax==s2.total_marks && fmax==s3.total_marks) || (fmax==s1.total_marks && fmax==s3.total_marks)){
            if(s1.id<s2.id && (fmax==s1.total_marks) && (fmax==s2.total_marks)){
                cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
            }else if(s1.id>s2.id && (fmax==s2.total_marks) && (fmax==s1.total_marks)){
                cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;;

            }else if(s2.id<s3.id && (fmax==s3.total_marks) && (fmax==s2.total_marks)){
                cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

            }else if(s2.id>s3.id && (fmax==s3.total_marks) && (fmax==s2.total_marks)){
                cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
            }else if(s1.id>s3.id && (fmax==s1.total_marks) && (fmax==s3.total_marks)){
                cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
            }else if(s1.id<s3.id && (fmax==s1.total_marks) && (fmax==s3.total_marks)){
              cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;  
            }
        }
        else {
            

            if(fmax==s1.total_marks){
            cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
        }else if(fmax==s2.total_marks){
            cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;
        }else if(fmax==s3.total_marks){
            cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
        }
        
        }
    }
    return 0;
}