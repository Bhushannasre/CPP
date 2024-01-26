/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base
class Shape and then create derived classes like Circle, Rectangle, and Triangle.
 Each shape should have methods for calculating area and perimeter specific to its geometry.*/
#include<iostream>
using namespace std;
class shape{

public :

};
class circle:public shape{
    public:
    float r,arc;
    public:
    void area(){
 cout<<"Enter radius";
    cin>>r;
    arc=(3.14)*r*r;
}
 int display(){
 cout<<"Area of circle:-"<<arc<<endl;
 }

};
class rectangle:public shape{
    public:
    float a,b,ar;
    public:
    void getdata(){
cout<<"area and base:-";
cin>>a>>b;
ar=a*b;
}
int display1(){
    cout<<"Area of rectangle:-"<<ar<<endl;

}

};
class triangle:public shape{
public:
     float b,h,art;
     public:
    void inside(){

cout<<"base and height:-";
cin>>b>>h;
art=1/2*b*h;
}
 int display2(){
 cout<<"Area of triangle:-"<<art<<endl;



 }

};
int main(){
   triangle obj;
   obj.area();
   obj.display()
   obj.getdata();
   obj.display1();
   obj.inside();
   obj.display();

}
