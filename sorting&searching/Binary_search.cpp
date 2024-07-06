#include<iostream>
using namespace std;

void binarysearch(int a[],int digit)
{
    cout<<"the array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
cout<<"\n";
     bool check = false;
    int first=0;
    int last=5-1;
    while(first<=last)
    {
        int mid = (first+last)/2;
        if(a[mid]==digit)
        {
            cout<<"your digit is found Gg .";
           check =true;
            break;
        }
        else if(a[mid]<digit)
        {
            first=mid+1;
        }
        else
        {
            last = mid-1;
        }
    }

if(!check)
{
    cout<<"your digit is not found "<<endl;
}

}
int main()
{
    int a[5]={2,4,6,7,9};
    int n;
    cout<<"Enter digit you want to found : ";
    cin>>n;
    binarysearch(a , n);
}
