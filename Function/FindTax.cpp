//data type double\
#include <iostream>
#include<string.h>
using namespace std;

double total(double price ,double tax)
{
    double total = price+tax;
cout<<"Total money is :"<<total<<endl;

}
double tax(double price,double taxrate)
{

 double tax =1;
 tax= price * (taxrate/100);
 cout<<"TAX: "<<tax<<endl;
   total(price,tax);
}


int main()
{
       double taxrate ;
double price;
cin>>price;
cin>>taxrate;
cout<<"PRICE :"<<price<<endl;
tax(price , taxrate);

    return 0 ;
}
