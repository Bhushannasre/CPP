/*Accept radius and compute area and circumference*/
#include<iostream>
using namespace std;
int main()
{
    float rad,area,cir;
    cout<<"Enter Radius:-";
    cin>>rad;
    area=(3.14)*rad*rad;
    cir=2*(3.14)*rad;
    cout<<"Area"<<area<<endl;
    cout<<"circumference"<<cir<<endl;
    return 0;
}
