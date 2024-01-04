#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1,num;
    cin>>num1>>num;;
    cout<<"floor"<<" "<<num1<<" "<<"/"<<" "<<num<<" "<<"="<<" "<<floor(num1/num)<<endl;
    cout<<"ceil"<<" "<<num1<<" "<<"/"<<" "<<num<<" "<<"="<<" "<<ceil(num1/num)<<endl;
    cout<<"round"<<" "<<num1<<" "<<"/"<<" "<<num<<" "<<"="<<" "<<round(num1/num)<<endl;
}