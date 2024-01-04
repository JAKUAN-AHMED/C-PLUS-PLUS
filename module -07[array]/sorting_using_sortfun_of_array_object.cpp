#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int marks;
        int age;
};
bool need(student a,student b)
{
    if(a.name.size()>b.name.size()) return true;
    else return false;
}
int main()
{
    student arr[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].marks>>arr[i].age;
        cin.ignore();
    }
    sort(arr,arr+3,need);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].marks<<" "<<arr[i].age<<endl;
    }
    return 0;
}
