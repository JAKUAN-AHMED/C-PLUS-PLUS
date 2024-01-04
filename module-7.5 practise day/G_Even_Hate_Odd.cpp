#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int even=0;
        int odd=0;
        int count=0;
        if(n%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]%2==0) even++;
                else odd++;
            }
            if(even==odd) cout<<"0"<<endl;
            else if(n==odd ||n==even)
            {
                for(int j=0;j<n/2;j++)
                {
                    count++;
                }
                cout<<count<<endl;
            }
            else cout<<abs(even-odd)/2<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}
