#include<bits/stdc++.h>
using namespace std;
int* get_array(int size)
{
    int *array=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    return array;
}
int main()
{
    int a;
    cin>>a;
    int *array=get_array(a);
    int b;
    cin>>b;
    int *array2=new int[b];
    for(int i=b-a;i<b;i++)
    {
        cin>>array2[i];
    }
    for(int i=0;i<a;i++)
    {
        array2[i]=array[i];
    }
    for(int i=0;i<b;i++)
    {
        cout<<array2[i]<<" ";
    }
    return 0;
}

