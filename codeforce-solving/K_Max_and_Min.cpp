#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,d;
    cin>>n>>p>>d;
    int mn=min(n,p);
    int mn1=min(mn,d);
    int mx=max(n,p);
    int mx1=max(mx,d);
    cout<<mn1<<" "<<mx1;
    return 0;
}
