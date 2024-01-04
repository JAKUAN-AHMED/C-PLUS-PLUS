#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first,second,third;
    char op;
    char sign='=';
    cin>>first>>op>>second>>sign>>third;
    int third1=first+second;
    int third2=first-second;
    int third3=first*second;
    if(op=='+' && third1==third)
    {
        cout<<"Yes"<<endl;
    }
    else if(op=='-' && third2==third)
    {
        cout<<"Yes"<<endl;
    }
    else if(op=='*' && third3==third)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        if(op=='+' && third1!=third)
        {
            cout<<third1<<endl;
        }
        if(op=='-' && third2!=third)
        {
            cout<<third2<<endl;
        }
        if(op=='*' && third3!=third)
        {
            cout<<third3<<endl;
        }
    }
    return 0;
}
