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
    cin.ignore();
    student arr[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        cin.ignore();
    }
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         swap(arr[i],arr[j]);
    //     }
    // }
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks;
        cout<<endl;
    }
    return 0;
}
