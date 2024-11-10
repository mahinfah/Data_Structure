#include<iostream>
using namespace std;

void CountingSort(int A[], int B[], int k, int n)
{

    int count[k+1];
// making an array length of max value
    for(int i =0; i<=k; i++)
    {
        count[i] = 0;
    }
   //initializing this array value as 0

    for(int i =0; i<n; i++)
    {
        count[A[i]]++;
    }
    //count[A[i]]++ increments the count of the element A[i] by 1.

    for(int i=1; i<=k; i++)
    {
        count[i] = count[i]+count[i-1];
    }

    //prefix sum 

    for(int i = n-1; i>=0; i--)
    {
        B[--count[A[i]]]= A[i];
    }
}

int main()
{
    int A[] = {10,69,87,93,85,120,52,63,74,95,42};
    int n = sizeof(A) / sizeof(A[0]);
    int B[n];
    int maxVal =0;
//finding max here
    for(int i=0; i<n;i++)
    {
        if(A[i] > maxVal)
        {
            maxVal = A[i];
        }
    }
//passing values
    CountingSort(A, B, maxVal, n);


    cout<<"Unsorted Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<B[i]<<" ";
    }
}

