#include<iostream>
using namespace std;
int main()

{
    int a[10]={33,4,6,2,5,76,23,323,3,2};
    for(int i = 0 ;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;

int temp;

    //sorting
    for(int i = 0 ;i<10;i++)
        {
            for(int j =i+1 ; j<10;j++)
            {
                if(a[i]>a[j])
                {
                  temp = a[i];
                    a[i]=a[j];
                    a[j] = temp ;
                }
            }

        }

            for(int i = 0 ;i<10;i++)
    {
        cout<<a[i]<<" ";
    }


}
