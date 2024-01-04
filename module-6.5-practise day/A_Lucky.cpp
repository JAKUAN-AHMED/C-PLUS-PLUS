#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string s;
        cin>>s;
        int arr[6];
        for(int i=0;i<6;i++)
        {
            arr[i]=s[i]-'0';
        }
        // for(int i=3;i<6;i++)
        // {
        //     sum1 += s[i];
        // }
        int sum=arr[0]+arr[1]+arr[2];
        int sum1=arr[3]+arr[4]+arr[5];
        if(sum==sum1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
