/*Accept student details and compute it*/
#include<iostream>
using namespace std;
int main()
{
    int roll_no,marks1,marks2,marks3,total;
    float per;
    char grade;
    cout<<"Enter your roll no.";
    cin>>roll_no;
    cout<<"Enter marks";
    cin>>marks1>>marks2>>marks3;
    total=marks1+marks2+marks3;
    cout<<"total="<<total<<endl;
    per=(float)total/300*100;
     cout<<"percentage="<<per<<endl;
    if(per>=90)
    {
        cout<<"A+ GRADE";
    }
    else if(per<=89&&per>=80)
    {
        cout<<"A GRADE";
    }
     else if(per<=79&&per>=70)
    {
        cout<<"B+ Grade";
    }
    else if(per<=69&&per>=60)
    {
        cout<<"B GRADE";
    }
   else  if(per<=59&&per>=50)
    {
        cout<<"C GRADE";
    }
    else
        {
            cout<<"Fail";
        }
    return 0;
}
