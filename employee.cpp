/*Accept basic salary compute their salary*/
#include<iostream>
using namespace std;
int main()
{
    int bs;
   float pf,tax,hra,da;
   cout<<"Enter Basic salary:-";
   cin>>bs;
   pf=bs*2/100;
   tax=bs*3/100;
   hra=bs*5/100;
   da=bs*8/100;
    cout<<"Pf:-"<<pf<<endl;
    cout<<"Tax:-"<<tax<<endl;
    cout<<"House rent Allowance:-"<<hra<<endl;
    cout<<"Dearness Allowance:-"<<da<<endl;
   return 0;

}
