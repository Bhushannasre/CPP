/*Accepting two numbers and swap them*/
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter x Numbers:-";
    cin>>x;
    cout<<"Enter y Numbers:-";
    cin>>y;
    z=y;
    y=x;
    x=z;
    cout<<"x:-"<<x<<endl;
    cout<<"y:-"<<y<<endl;
    return 0;
}
