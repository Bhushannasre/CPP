#include<iostream>
#include<conio.h>
#define max 10
using namespace std;
int  main(){
int x[max],sum=0,j;
for(int j=0;j<=max;j++){
cout<<"Enter"<<"X["<<j<<"]"<<"element";
cin>>x[j];
sum=sum+x[j];
}
cout<<"The sum="<<sum;
for(j=0;j<max;j++){
    cout<<"\n Display the value of x["<<j<<"]:";
    cout<<x[j]<<" ";
}




}
