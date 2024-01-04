#include<bits/stdc++.h>
using namespace std;
void matal(int d)
{
    for(int i=0;i<d;i++)
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        for(int i=0;i<n;i++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    matal(t);
    return 0;
}
