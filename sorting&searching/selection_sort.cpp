#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{

    for(int i=1;i<4;i++)
    {
        int j = i-1;
        int temp =  a[i];

        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }

    cout<<"After sorting " <<endl;

    for(int i=0;i<4;i++ )
    {
        cout<<a[i]<<" ";
    }

}




int main()
{
    int a[4]={3,5,1,2};
    cout<<"Before sorting " <<endl;

    for(int i=0;i<4;i++ )
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    insertion_sort(a,4);
}
