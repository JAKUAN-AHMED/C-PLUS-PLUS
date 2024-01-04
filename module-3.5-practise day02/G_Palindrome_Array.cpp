#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int flag=0;
    int t=n-1;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]==arr[t])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        t--;
    }
    if(flag==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}
