#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    bool respect=false;
    int count=0;
    for(char c:str)
    {
        if(isalpha(c))
        {
            if(respect==false) count++;
            respect=true;
        }
        else
        {
            respect=false;
        }
    }
    cout<<count<<endl;
    return 0;
}
