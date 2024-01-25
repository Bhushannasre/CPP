/*Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. Create an abstract class
Employee with attributes like name and employee ID. Derive concrete classes like HourlyEmployee
and SalariedEmployee.
Define abstract methods for calculating pay in the base class and implement them in the derived classes.*/
#include<iostream>
using namespace std;
class Employeepayroll{
protected :
    string ename;
    int empid;
public:
    virtual void calculating_pay()=0;

};
class hourlyemp :public Employeepayroll{
public :
    int sal,hour,nohour;
public :
    void calculating_pay(){
        cout<<"Enter Employee Name:-";
    cin>>ename;
    cout<<"Enter Employee id:-";
    cin>>empid;
    cout<<"How many much money for 1 hour:-";
    cin>>hour;
    cout<<"How many hours Employee Worked :-";
    cin>>nohour;
    sal=hour*nohour*7*(52/12);
    }
    int  display(){
    cout<<"Employee Name:"<<ename<<endl;
    cout<<"Employee id:"<<empid<<endl;
    cout<<"Salary of a employee:"<<sal<<endl;
    }
};
class Salariedemp: public Employeepayroll{
public :
    int salary,hra,da,pf,netsalary;
public :
    void calculating_pay(){
        cout<<"Enter Employee Name:-";
    cin>>ename;
    cout<<"Enter Employee id:-";
    cin>>empid;
        cout<<"Enter salary of employee:-";
        cin>>salary;
        hra=0.20*salary;
        da=0.30*salary;
        pf=salary-2000;
        netsalary=salary+hra+da+pf;

    }
    int show()
    {
        cout<<"Net salary of a employee:"<<netsalary;
    }
};
int main(){
  hourlyemp obj1;
Employeepayroll * ptr[1];
ptr[0]=&obj1;
ptr[0]->calculating_pay();
obj1.display();
Salariedemp obj2;
ptr[1]=&obj2;
ptr[1]->calculating_pay();
obj2.show();



}
