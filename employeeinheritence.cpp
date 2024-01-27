#include<iostream>
using namespace std;
class employee{
protected :
    string name;
    int empid;
    double salary;
public :
    void input(){
        cout<<"Enter Name:-"<<endl;
        cin>>name;
        cout<<"Employee id:-"<<endl;
        cin>>empid;
        cout<<"Employee Salary:-"<<endl;
        cin>>salary;
    }
       virtual int calculate_salary()=0;


};
class manager:public employee
{
public:
    string name;
    int id;
    double salary;
    double hra,da,pf,netsalary;
public:
    void vx()
    {
        cout<<"Enter Manager Name:-"<<endl;
        cin>>name;
        cout<<"Enter id :-"<<endl;
        cin>>id;
        cout<<"Enter salary:-"<<endl;
        cin>>salary;
    }
    int calculate_salary(){
        hra=0.5*salary;
        da=0.2*salary;
        pf=salary-2000;
        netsalary=salary+da+pf;
        cout<<"Net Salary of Manager is :-"<<netsalary<<endl;
    }
};
class developer:public employee
{
public:
    string name;
    int id;
    double salary;
    double hra,da,pf,netsalary;
public:
    void getdata()
    {
        cout<<"Enter Developer Name:-"<<endl;
        cin>>name;
        cout<<"Enter id :-"<<endl;
        cin>>id;
        cout<<"Enter salary:-"<<endl;
        cin>>salary;
    }
    int calculate_salary(){
        hra=0.5*salary;
        da=0.2*salary;
        pf=salary-2000;
        netsalary=salary+da+pf;
        cout<<"Net Salary of Developer is :-"<<netsalary<<endl;
    }
    void vx1()
    { manager m;
       m.vx();}

};
int main(){
developer obj;
manager s;
obj.input();
obj.vx1();
obj.getdata();
obj.calculate_salary();
s.calculate_salary();



}
