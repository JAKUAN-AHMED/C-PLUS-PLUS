#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string nm;
        int clss;
        char sec;
        int id;
        int maths;
        int eng_marks;
};
bool cmp(student x,student y)
{
    if((x.eng_marks+x.maths)>(y.maths+y.eng_marks)) return true;
    else if(x.id<y.id &&(x.eng_marks+x.maths)==(y.maths+y.eng_marks)) return true;
    else return false;
}
int main()
{
    int test;
    cin>>test;
    student arr[test];
    for(int i=0;i<test;i++)
    {
        cin>>arr[i].nm>>arr[i].clss>>arr[i].sec>>arr[i].id>>arr[i].maths>>arr[i].eng_marks;
    }
    sort(arr,arr+test,cmp);
    for(int i=0;i<test;i++)
    {
        cout<<arr[i].nm<<" "<<arr[i].clss<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<<arr[i].maths<<" "<<arr[i].eng_marks<<endl;
    }
    return 0;
}
