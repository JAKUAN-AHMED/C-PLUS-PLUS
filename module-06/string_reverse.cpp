#include<bits/stdc++.h>
using namespace std;
void danger(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        danger(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    danger(ss);
    // string word;
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    // reverse(s.begin(),s.end());
    // for(char c:s)
    // {
    //     cout<<c<<endl;
    // }
    return 0;
}
