#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first,second;
    char op;
    cin>>first>>op>>second;
    if(first>second && op=='>')
    {
        cout<<"Right"<<endl;
    }
    else if(first<second && op=='<')
    {
        cout<<"Right"<<endl;
    }
    else if(first==second && op=='=')
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
    return 0;
}
