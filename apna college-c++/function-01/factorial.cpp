#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;
    int f=fact(n);
    cout<<f;
    return 0;
}
