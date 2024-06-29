//2nd problem 
// Declare a structure to represent a complex number (a number having a real part and an imaginary part). Write C++ functions to add, subtract, multiply, and divide two complex numbers.
#include<iostream>
using namespace std;
struct complexnum
{
  int real;
  int imagine;
  void show(int num)
  {
      cout<<num+1<<"st number: "<<real<<"+i"<<imagine<<endl;
  }

};



void task(complexnum s[], int& num1 ,  int& num2 )
{ int p = 1;
while(p==1)
{
    cout<<"Add number                press 1 "<<endl;

    int n ;
    cout<<"To show number:           press 2 "<<endl;

  //  cin>>n;
    cout<<"To sum numbers:           press 3"<<endl;
    cout<<"To subtract numbers:      press 4"<<endl;
    cout<<"To multipy numbers:       press 5"<<endl;
    cout<<"To Divide numbers:        press 6"<<endl;

     cin>>n;

    cout<<endl;

    if(n==1)
    {
cout<<"Add 1st real value ";
cin>>s[num1].real;
cout<<"Add 1st imagine value ";
cin>>s[num1].imagine;


cout<<"Add 2nd real value ";
cin>>s[num2].real;
cout<<"Add 2nd imagine value ";
cin>>s[num2].imagine;


    }
    if(n==2)
    {
     s[num1].show(num1);
     s[num2].show(num2);
    }
 if (n==3)
    {
        int sum2=0 , sum=0;
        sum= s[num1].real + s[num2].real;
        sum2=s[num1].imagine + s[num2].imagine;

        cout<<"THE SUM IS :"<< sum <<"+i"<<sum2<<endl;
    }
     if (n==4)
    {
        int sum4=0 , sum5=0;
        sum4= s[num1].real - s[num2].real;
        sum5=s[num1].imagine - s[num2].imagine;

        cout<<"THE SUBTRACTION IS :"<< sum4 <<"+i"<<sum5<<endl;
    }
     if (n==5)
    {
        int sum1=1 , sum3=1;
        sum1= s[num1].real * s[num2].real;
        sum3=s[num1].imagine * s[num2].imagine;

        cout<<"THE Multipication IS :"<< sum1 <<"+i"<<sum3<<endl;
    }
    if (n==6)
    {
        int sum6=1 , sum7=1;
        sum6= s[num1].real / s[num2].real;
        sum7=s[num1].imagine / s[num2].imagine;

        cout<<"THE DIVISION IS :"<< sum6 <<"+i"<<sum7<<endl;
    }
    if(n==7)
    {
        n=1;
    }
}
}


int main()
{
    complexnum s[1000];
int num1=0;
    int num2=1;
    task(s,num1,num2);

}
