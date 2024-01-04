#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        string skills;
        person(string name,int age,string skills)
        {
            this->name=name;
            this->age=age;
            this->skills=skills;
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
    person* jakuan=new person("Jakuan ahmed",18,"c c++ python");
    jakuan->Printdetails();
    return 0;
}
