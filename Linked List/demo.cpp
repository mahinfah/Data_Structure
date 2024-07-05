#include<iostream>
using namespace std;

struct node
{
    int n ;
    node *next ;
};

int main()
{
    node first , second ,third ;
    first.n = 1 ;
    first.next = &second ;

    second.n = 2 ;
    second.next = &third ;

    third.n =4 ;
    third.next= NULL;
    cout << first.n << " " << second.n <<" "<<third.n<<endl ;

    // here replace second ;
    node f ;
    f.n = 7 ;
    f.next = new node ;

    (*f.next).n = 2 ; // (*f.ne  xt).n == f.next -> n
    (*f.next).next = new node ;

   f.next-> next -> n = 5 ;
    cout << f.n << " " << (*f.next).n<<" " <<(*(*f.next).next).n <<endl ;
}
