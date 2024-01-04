#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(student a,student b)
{
    if(a.marks==b.marks)
    {
        if(a.roll<b.roll) return true;
        else return false;
    }
    else
    {
        if(a.marks>b.marks) return true;
        else return false;
    }
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    student arr[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        cin.ignore();
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks;
        cout<<endl;
    }
    return 0;
}
