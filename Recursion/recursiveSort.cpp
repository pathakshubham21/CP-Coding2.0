#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& arr, int temp) {
    if (arr.size() == 0 || arr[arr.size() - 1] <= temp) {
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size() - 1];
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val);
}

void recursiveSort(vector<int>& arr) {
    if (arr.size() == 0 || arr.size() == 1)
        return;

    int temp = arr[arr.size() - 1];
    arr.pop_back();
    recursiveSort(arr);
    insert(arr, temp);
}

int main() {
    vector<int> arr = {2, 6, 4, 9, 1, 7, 99, 22, 0};
    recursiveSort(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
