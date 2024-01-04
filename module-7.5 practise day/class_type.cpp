#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        cin.ignore();
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].name<<arr[i].marks<<arr[i].roll;
        cout<<endl;
    }
    return 0;
}
