//array in dynamic memory its called dynamic <=array
//syntax of this array is<==
//new data type[size of array];
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
