#include<iostream>
using namespace std ;
void change(int x)
{
    cout<<x<<endl;
    x= 20;

    cout<<x<<endl;

}
 int main()
 {
    int x =10;      //

    change(x);
    cout<<x<<endl;


    return 0 ;

 }

