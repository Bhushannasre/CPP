/*Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles.
 Start with a base class Vehicle and create derived classes like Car,
 Motorcycle, and Truck. Each derived class should have unique properties like
 the number of wheels and specific methods like start_engine().*/
#include<iostream>
using namespace std;
class vehical{

public :
    int star_engine(){
    }



};
class Car:public vehical{
public:
    int wheel;
string engine;
int speed;
void inside(){
    cout<<"Enter wheel numbers:-";
    cin>>wheel;
    cout<<"Enter engine power";
    cin>>engine;
    cout<<"Enter Speed of car";
    cin>>speed;
}
public:
int start_engine(){

cout<<"Wheels number is :-"<<wheel<<endl;
cout<<"Engine power of a car:-"<<engine<<endl;
cout<<"Top speed of a car:-"<<speed<<endl;
}

};
class truck :public vehical{
public :
    int wheel;
string engine;
int speed;
    void intake(){
        cout<<"Enter wheel numbers:-";
    cin>>wheel;
    cout<<"Enter engine power";
    cin>>engine;
    cout<<"Enter Speed of truck";
    cin>>speed;
}
public :
int start_engine()
{

cout<<"Wheels number is :-"<<wheel<<endl;
cout<<"Engine power of a truck:-"<<engine<<endl;
cout<<"Top speed of a truck:-"<<speed<<endl;
}

};
class motorcycle:public vehical{
    public:
        int wheel;
string engine;
int speed;
void getdata(){
cout<<"Enter wheel numbers:-";
    cin>>wheel;
    cout<<"Enter engine power";
    cin>>engine;
    cout<<"Enter Speed of motorcyle";
    cin>>speed;
}
public :
int start_engine(){

cout<<"Wheels number is :-"<<wheel<<endl;
cout<<"Engine power of a motorcyle:-"<<engine<<endl;
cout<<"Top speed of a Motorcyle:-"<<speed<<endl;

}
};
int main(){
motorcycle s1;
s1.start_engine();
s1.vehical::start_engine();




}



