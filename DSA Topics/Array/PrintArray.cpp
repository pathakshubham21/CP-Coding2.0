// Question : Print Array from user input.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    vec.reserve(n); // optional but good

    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        vec.push_back(item);
    }

    for (int x : vec) {
        cout << x << " ";
    }
    return 0;
}