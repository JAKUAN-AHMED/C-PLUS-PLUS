#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int count=0;
    bool inside_word=false;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(inside_word==false) count++;
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
    }
    cout<<count<<endl;
    return 0;
}
