#include<iostream>
using namespace std ;
void change(int *px)
{
    *px= 20;

    cout<<*px<<endl;

}
 int main()
 {
    int x =10;
        int *px = &x;


    change(px); //passing pointer to chnage function 

    cout<<x<<endl;


    return 0 ;

 }
