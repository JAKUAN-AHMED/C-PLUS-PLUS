#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];

    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // if(arr[i]>arr[j])
            // {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            // }
        }
        
    }
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr2[i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
