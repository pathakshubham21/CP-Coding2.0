#include<iostream>
using namespace std;

int partition_arr(int arr[], int start , int end)
{
    int pivot = arr[start];
    int smallcount = 0;

    for(int i = start + 1; i <= end; i++)
    {
        if(arr[i] < pivot)
            smallcount++;
    }

    int PI = start + smallcount;
    swap(arr[start], arr[PI]);

    int i = start;
    int j = end;

    while(i < PI && j > PI)
    {
        if(arr[i] < pivot)
            i++;
        else if(arr[j] > pivot)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return PI;
}

void quick_sort(int arr[], int start, int end )
{
    if(start >= end)
        return;

    int PI = partition_arr(arr, start, end);

    quick_sort(arr, start, PI - 1);
    quick_sort(arr, PI + 1, end);
}

int main()
{
    int arr[] = {4,1,2,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr, 0, n-1);

    for(int item : arr)
        cout << item << " ";

    return 0;
}