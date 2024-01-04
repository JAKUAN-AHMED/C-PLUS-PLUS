#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int age;    
};
int main()
{
    student arr[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].age;
        cin.ignore();
    }
    student mx;
    mx.age=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(arr[i].age>mx.age)
        {
            mx=arr[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.age<<endl;
    student mn;
    mn.age=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(arr[i].age<mn.age)
        {
            mn=arr[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.age<<endl;
    return 0;
}
