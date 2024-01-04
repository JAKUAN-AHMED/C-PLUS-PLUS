#include<bits/stdc++.h>
int factorial(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact*=i;
    }
    return fact;
}
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int fact=factorial(num1);
    int fact1=factorial(num2);
    cout<<fact<<" "<<fact1;
    return 0;
}
