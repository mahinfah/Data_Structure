#include<iostream>
using namespace std;
int main()
{
    int a[5]={3,2,1,44,4};

    cout<<"Before sorting"<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<"  ";

    }
    cout<<endl;


    for(int i =0;i<5-1;i++)
    {

         for(int j =0;j<5-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp =a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }

         }

    }

    cout<<"After sorting:"<<endl;

    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<"  ";
    }
}
