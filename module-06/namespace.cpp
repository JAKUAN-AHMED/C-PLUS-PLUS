#include<bits/stdc++.h>
using namespace std;
namespace jakuan
{
    int age=18;
    void hello()
    {
        cout<<"namespace jakuan"<<endl;
    }
}
namespace jaber
{
    int age1=17;
    void hello()
    {
        cout<<"namespace jaber"<<endl;
    }
}
using namespace jakuan;
int main()
{
    cout<<age<<endl;
    hello();
    jaber::hello();
    return 0;
}
