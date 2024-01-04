#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    if(n>p)
    {
        if(n%p==0) cout<<"Multiples";
        else cout<<"No Multiples";

    }
    else if(p>n)
    {
        if(p%n==0) cout<<"Multiples";
        else cout<<"No Multiples";
    }
    else cout<<"Multiples"; 
    return 0;
}
