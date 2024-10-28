#include<iostream>
using namespace std;
int main()
{

    int a[5]={3,4,6,33,2};
    int b;
    cout<<"search : ";
    cin>>b;

    int count=0;

    for(int i =0 ;i<5;i++)
    {
        if(a[i]==b)
        {
            cout<<a[i]<<" is found ";
            count++;
        }
    }

    if(count==0)
    {
        cout<<b<< "  not found .";
    }

}
