//for float---
//<<fixed<<setprecision(digit)<<variable
//header file include<iomanip>
//given below a program

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<a+b;
    return 0;
}