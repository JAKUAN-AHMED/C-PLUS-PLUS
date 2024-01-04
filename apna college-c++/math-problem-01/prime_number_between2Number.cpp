#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int first,second;
    cin>>first>>second;
    for(int i=first;i<=second;i++)
    {
        if(isprime(i)==true)
        {
            if(i==1)
            {
                continue;
            }
            else cout<<i<<endl;
        }
    }
    return 0;
}
