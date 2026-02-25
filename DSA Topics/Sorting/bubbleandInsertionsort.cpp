#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    
}
int main() {
   
   int arr[] = {1, 1,1,1,0};
   int n= sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
   for(int item:arr)
   {
       cout<<item<<" ";
   }
    return 0;
}



















