#include<iostream>
using namespace std;
int main()
{
    long long int n,p;
    cin>>n>>p;
    long long int lastdigit1=n%10;
    long long int lastdigit=p%10;
    long long int sum=lastdigit1+lastdigit;
    cout<<sum;
}