#include<bits/stdc++.h>
using namespace std;
//objec in c++
class Student
{
    public:
        char name[100];
        int clss;
        int roll;
        char section;
        Student(int r,int c,char s,char* n)
        {
            roll=r;
            clss=c;
            section=s;
            strcpy(name,n);
        }
};
int main()
{
    
    char name[100]="rahim cholimullah";
    Student* rahim=new Student(79,12,'A',name);
    (*rahim).roll=55;
    cout<<rahim->name<<endl;
    cout<<(*rahim).roll<<endl;
    cout<<rahim->clss<<endl;
    // int* a=new int;
    // *a=10;
    // cout<<*a<<endl;
    //delete an object
    delete rahim;
    cout<<rahim->name<<endl;
    cout<<(*rahim).roll<<endl;
    cout<<rahim->clss<<endl;
    return 0;
}
