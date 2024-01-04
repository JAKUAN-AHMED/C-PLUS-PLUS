#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        char name[10];
        float height;
        int age;
        
    person(char* nm,float h,int ag)
    {
        strcpy(name,nm);
        height=h;
        age=ag;
    }
    // void PrintDetails()
    // {
    //     cout<< name<<"Details:"<<endl;
    //     cout<<"Person Name: "<<name<<endl;
    //     cout<<"Height: "<<height<<endl;
    //     cout<<"Age: "<<age<<endl;
    //     cout<<endl;
    // }
};
int main()
{
    person *Jakuan=new person("Jakuan",5.6,18);
    person *Jaber=new person("Jaber",5.6,17);
    int d=(*Jaber).age;
    int p=(*Jakuan).age;
    if(p>d)
    {
        cout<<(*Jakuan).name<<endl;
    }
    else
    {
        cout<<(*Jaber).name<<endl;
    }

    return 0;
}
