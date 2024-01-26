/*menu driven and display total amount*/
#include<iostream>
using namespace std;
int main()
{
    int amt,total,vmar=100,vfam=250,nfam=450;
    char ch;
    cout<<"-----pizza shop------"<<endl;
    cout<<"1. veg margarita=rs.100"<<endl;
    cout<<"2. veg farmhouse=rs.250"<<endl;
    cout<<"3. non farmhouse=rs.450"<<endl;
    cout<<"4. Add more pizza"<<endl;
    cout<<"5. total amount"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    cout<<"Enter amt:-";
    cin>>amt;
    switch (ch)
    {
   case 1:

    vmar+=amt+total;
    cout<<"veg margarita";
    break;
   case 2:
    vfam+=amt+total;
    cout<<"veg farmhouse";
    break;
   case 3:
    nfam+=amt+total;
    cout<<"non farmhouse";
    break;
    case 4:
    cout<<"Add more";
     cout<<"Add more:-";
    cin>>vmar>>vfam>>nfam;

    break;
    case 5:
        total=vmar+vfam+nfam;
        cout<<"total amount:-"<<total;


    }
    return 0;


}
