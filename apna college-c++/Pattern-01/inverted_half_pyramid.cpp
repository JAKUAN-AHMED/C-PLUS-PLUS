#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;   
    int col=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        col--;
        cout<<endl;
    }

    return 0;
}
