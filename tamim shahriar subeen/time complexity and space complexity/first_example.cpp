#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,even[101];
    for(int i=0;i<101;i++)
    {
        even[i]=0;
    }
    for(int i=0;i<101;i+=2)
    {
        even[i]=1;
    }
    cin>>n;
    if(even[n]) cout<<"even";
    else cout<<"odd";
    return 0;
}
