#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int marks;
        int age;
};
int main()
{
    student arr[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].marks>>arr[i].age;
        cin.ignore();
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i].name.size()<arr[j].name.size())
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].marks<<" "<<arr[i].age<<endl;
    }
    return 0;
}
