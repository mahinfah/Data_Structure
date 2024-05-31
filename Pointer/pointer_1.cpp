#include<iostream>
using namespace std;
int main()
{
    int a = 10; //assigning a = 10
    int* p = &a;  // pointing memory location by *p

    cout<< p  <<endl;
   cout<< &a<<endl;

   int** px = &p;
   cout<<**px<<endl;
   cout<<p<<endl;
   cout<<px;

    return 0 ;
}
