#include<bits/stdc++.h>
using namespace std;
void  fibo(int n)
{
    int t1=0;
    int t2=1;
    for(int i=0;i<n;i++)
    {
        cout<<t1<<" ";
        int nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
