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
Student fun()
{
    char name[100]="rahim ullah";
    Student rahim(29,7,'A',name);
    return rahim;
}
int main()
{
    Student rahim=fun();
    cout<<rahim.name<<endl;
    cout<<rahim.clss<<endl;
    cout<<rahim.roll<<endl;


    return 0;
}
