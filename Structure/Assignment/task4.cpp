// problem question
#include<iostream>
using namespace std;
void show(int a[2][2])
{
   cout<<"the matrix are :";
   cout<<endl;
 for(int i =0 ;i<2;i++)
 {
     //cout<<"the matrix are :";
     for(int j=0; j<2;j++)
     {
         cout<<a[i][j]<<" ";
     }
 cout<<endl;
 }
}

int sum(int a[2][2],int b[2][2],int c[2][2],int d[2][2])
{
     int sum=0;

    cout<<"The new matrix is "<<endl;
 for(int i =0 ;i<2;i++)
 {
     for(int j=0; j<2;j++)
     {
            cout<<a[i][j]+b[i][j]+c[i][j]+d[i][j]<<"  ";
     }
cout<<endl;
 }



}

int main()
{
   int a[2][2]={1,1,1,1};
   int b[2][2]={1,1,1,1};
   int c[2][2]={1,1,1,1};
   int d[2][2]={1,1,1,1};

    show(a);
    show(b);
    show(c);
    show(d);
   sum(a,b,c,d);
}
