#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min(a,b);
    int mn2=min(mn,c);
    int mx=max(a,b);
    int mx2=max(mx,c);
    cout<<mn2<<" " <<mx2;
    return 0;
}
