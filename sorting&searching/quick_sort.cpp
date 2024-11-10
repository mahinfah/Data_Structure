#include <iostream>
using namespace std;

int Partition(int A[], int start, int end)
{
    int i = start+1;
    int pivot = A[start];
    for(int j=start+1; j<=end; j++)
    {
        if(A[j] < pivot)
        {
            swap(A[i], A[j]);
            i= i+1;
        }
    }

    swap(A[start], A[i-1]);
    return (i-1);
}

void QuickSort(int A[], int start, int end)
{
    if(start < end)
    {
        int pivot = Partition(A, start, end);
        QuickSort(A, start, pivot-1);
        QuickSort(A, pivot+1, end);
    }
}

int main()
{
    int A[] = {10,69,87,93,85,120,52,63,74,95,42};
    int n = sizeof(A) / sizeof(A[0]);
    int start = 0;
    int end = n-1;

     cout<<"Unsorted Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    QuickSort(A, start, end);
    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

}
