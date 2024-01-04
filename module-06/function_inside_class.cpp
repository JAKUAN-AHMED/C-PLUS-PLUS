#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        string skills;
        person(string nm,int ag,string sk)
        {
            name=nm;
            age=ag;
            skills=sk;
        }
        void Printdetails()
        {
            cout<<"NAME:"<<" "<<name<<endl;
            cout<<"AGE:"<<" "<<age<<endl;
            cout<<"SKILLS:"<<" "<<skills<<endl;
        }
};
int main()
{
    person* jakuan=new person("Jakuan ahmed",18,"software engineer");
    jakuan->Printdetails();
    return 0;
}
