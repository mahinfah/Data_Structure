#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void MergeSort(int A[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        MergeSort(A, start, mid);
        MergeSort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
}

int main()
{
    int A[] = {3, 2, 4, 5, 1};
    int n = sizeof(A) / sizeof(A[0]);
    int start = 0;
    int end = n - 1;

    cout << "Unsorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    MergeSort(A, start, end);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
