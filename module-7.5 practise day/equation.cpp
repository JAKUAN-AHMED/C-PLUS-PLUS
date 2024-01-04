#include<bits/stdc++.h>
using namespace std;
long long fun(long long d,long long q)
{
    long long add=0;
    for(int i=2;i<=q;i+=2)
    {
        long long sum=1;
        for(long long j=0;j<i;j++)
        {
            sum*=d;
        }
        add+=sum;
    }
    return add;
}
int main()
{
    long long n,p;
    cin>>n>>p;
    long long f=fun(n,p);
    cout<<f;
    return 0;
}