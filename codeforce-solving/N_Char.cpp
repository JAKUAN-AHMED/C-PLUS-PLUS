#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
        char x=ch-32;
        cout<<x<<endl;
    }
    else
    {
        char x1=ch+32;
        cout<<x1<<endl;
    }
    return 0;
}
