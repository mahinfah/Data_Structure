#include<iostream>
using namespace std;
int main()
{
    int a [5]={4,2,5,3,1};
    cout<<"the array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i = 0 ;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<endl;
//    cout<<"n\";
    cout<<"sorted array become:  ";
      for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
