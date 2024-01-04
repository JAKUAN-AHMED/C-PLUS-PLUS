#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt[26]={0};
        int ballons=0;
        for(int i=0;i<n;i++)
        {
            if(cnt[s[i]-'A']==0)
            {
                cnt[s[i]-'A']++;
                ballons+=2;
            }
            else
            {
                cnt[s[i]-'A']++;
                ballons++;
            }

        }
        cout<<ballons<<endl;

    }
    return 0;
}
