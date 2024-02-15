#include<iostream>
using namespace std;
class demo{
protected:
    int a,b;
    friend void alpha(){

}
};
void show(){
    demo d;
    cout<<"enter A";
    cin>>d.a;
    cout<<"Enter B";
    cin>>d.b;
cout<<"HELLo";
}
int main(){

show();
}
