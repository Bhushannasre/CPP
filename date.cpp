/*Create Date class with members day,month ,year.
Write no argument and parameterized constructor .Create two object s and initialize them using no argument and parameterised constructor
respectively.Print date using display function.*/
#include<iostream>
using namespace std;
class date{
private:
    string day;//private data members
    string month;
    int year;
public:
    date(){//default constructor
    day="monday";
    month="march";
    year=2023;
    }
    date(string day,string month,int year)//parameterized constructor
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display(){//function
    cout<<"Day:-"<<day<<endl;
    cout<<"Month:-"<<month<<endl;
    cout<<"Year:-"<<year<<endl;

    }
};
int main()
{
    date d1;//invoking value of default constructor
    date d2("Tuesday","May",2024);//invoking value of parameterized constructor
    cout<<"----------default constructor--------------"<<endl;
    d1.display();
    cout<<"--------------parameterized constructor-----------------"<<endl;
    d2.display();
    return 0;


}
