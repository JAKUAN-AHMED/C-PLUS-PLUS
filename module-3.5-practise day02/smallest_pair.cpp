#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;//input test case
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;//input size of array
        cin>>n;
        int* arr=new int[n];//input array
        for (int j = 0; j <n; j++)
        {
            cin>>arr[j];
        }
        //finding minimum
        int min=INT_MAX;
        for(int i=0;i<n-1;i++)//i=20 1 9
        {
            for(int j=i+1;j<n;j++)//j=1 9 4
            {
                
                int d=(arr[i]+arr[j]+j-i);//calculation
                if(d<min)
                {
                    min=d;//putting min value
                }
            }
        }
        cout<<min<<endl;//printing minimum
        
    }
    return 0;
}
