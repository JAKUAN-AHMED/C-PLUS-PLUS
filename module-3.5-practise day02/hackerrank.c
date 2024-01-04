#include<stdio.h>
int main()
{
    int first,second;
    scanf("%d %d",&first,&second);
    float a,b;
    scanf("%lf %lf",&a,&b);
    int s=first+second;
    int d=first=second;
    int s1=a+b;
    int d1=a-b;
    printf("%d %d\n",s,d);
    printf("%0.2lf %0.2lf\n",s1,d1);
    return 0;
}