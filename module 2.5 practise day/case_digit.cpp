#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str;
    cin>>str;
    if(str>=48 && str<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if(str>=65 && str<=90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    else{
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    
    return 0;
}
