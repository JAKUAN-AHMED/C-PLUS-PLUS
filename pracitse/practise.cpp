#include<bits/stdc++.h>
using namespace std;
class vehicle
{
    public:
        char type[10];
        int seat;
        char helper;
        
    vehicle(char* v_type,int s,char h)
    {
        strcpy(type,v_type);
        seat=s;
        helper=h;
    }
    void PrintDetails()
    {
        cout<< type <<"Details:"<<endl;
        cout<<"Vehicle Name: "<<type<<endl;
        cout<<"Total Seat: "<<seat<<endl;
        cout<<"Is Helper Required: "<<helper<<endl;
        cout<<endl;
    }
};
int main()
{
    vehicle *car=new vehicle("Car",4,'N');
    vehicle *motor=new vehicle("Motorcycle",2,'N');
    vehicle *bus=new vehicle("Bus",24,'Y');
   (*car).PrintDetails();
    (*motor).PrintDetails();
    (*bus).PrintDetails();

    return 0;
}
