#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int clss;
        char section;

};
int main()
{
    Student rahim;
    char nm[100]="RAHIM";
    strcpy(rahim.name,nm);
    rahim.clss=9;
    rahim.roll=29;
    rahim.section='A';

    Student karim;
    char nm2[100]="KARIM";
    strcpy(karim.name,nm2);
    karim.clss=9;
    karim.roll=30;
    karim.section='A';

    cout<<rahim.section;
    return 0;
}
