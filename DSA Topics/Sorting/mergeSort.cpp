/*
Merge Sort – Approach (Revision Notes)

1. Divide:
   - Recursively divide the array into two halves
   - Continue until each subarray has only 1 element
   - Base condition: if start >= end → return

2. Conquer:
   - Merge two sorted halves
   - Use two pointers:
        left  → start to mid
        right → mid+1 to end
   - Compare elements and push smaller one into temp array

3. Copy Remaining:
   - If elements remain in left half → copy all
   - If elements remain in right half → copy all

4. Copy Back:
   - Transfer temp array back to original array

Time Complexity:
   - O(n log n)

Space Complexity:
   - O(n) (extra temp array)
*/

#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(int arr[], int start, int mid, int end)
{
    vector<int> temp;

    int low = start;
    int high = mid + 1;

    while(low <= mid && high <= end)
    {
        if(arr[low] <= arr[high])
        {
            temp.push_back(arr[low]);
            low++;
        }
        else
        {
            temp.push_back(arr[high]);
            high++;
        }
    }

    while(low <= mid)
    {
        temp.push_back(arr[low]);
        low++;
    }

    while(high <= end)
    {
        temp.push_back(arr[high]);
        high++;
    }

    for(int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if(start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    mergeSortedArray(arr, start, mid, end);
}

int main()
{
    int arr[] = {4,1,6,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}