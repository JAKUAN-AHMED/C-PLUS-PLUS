#include<bits/stdc++.h>
using namespace std;
int main()
{
    float first,second;
    cin>>first>>second;
    if(first>0 && second>0)
    {
        cout<<"Q1"<<endl;
    }
    else if(first<0 &&  second<0)
    {
        cout<<"Q3"<<endl;
    }
    else if(first>0 && second<0)
    {
        cout<<"Q4"<<endl;
    }
    else if(first==0 &&second==0)
    {
        cout<<"Origem"<<endl;
    }
    else if(first<0 && second==0)
    {
        cout<<"Eixo X"<<endl;
    }
    else if(first==0 && second>0)
    {
        cout<<"Eixo Y"<<endl;
    }
    else
    {
        cout<<"Q2"<<endl;
    }
    return 0;
}
