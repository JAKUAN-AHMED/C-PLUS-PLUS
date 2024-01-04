#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r,char s,int c,char* n)
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);
        }

};
int main()
{
    Student karim(29,'A',7,"karim");
    cout<<karim.name<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    cout<<karim.roll<<endl; 
    return 0;
}
