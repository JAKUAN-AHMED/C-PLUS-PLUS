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
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].age<<endl;
    }
    return 0;
}
