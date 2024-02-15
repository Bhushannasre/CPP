#include<iostream>
using namespace std;
class shape{
protected :
    int l;
public:
    void getdata(){
        cin>>l;
    }
 virtual float area()=0;
};
class circle:public shape{
public :
    float area()
    {
        return(3.14*l*l);

    }

};
class square: public shape{
public :
    float area(){
    return(l*l);

    }


};

int main(){
    circle c;
    cout<<"Enter number"<<endl;
    c.getdata();
   float  y=c.area();
    cout<<"Area of circle:-"<<y<<endl;

    square s;
    cout<<"Enter number"<<endl;
    s.getdata();
    float z=s.area();
    cout<<"Area of square:-"<<z<<endl;




}
