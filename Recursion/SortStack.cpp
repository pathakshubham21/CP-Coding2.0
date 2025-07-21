#include <iostream>
#include <stack>
#include<vector>
using namespace std;

void insert(stack<int>& st, int temp) {
    if (st.empty() || st.top() <= temp) {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st, temp);
    st.push(val);
}

void SortStack(stack<int>& st) {
    if (st.size() <= 1)
        return;

    int temp = st.top();
    st.pop();
    SortStack(st); // typo fixed here
    insert(st, temp);
}

int main() {
    // Use vector to initialize
    vector<int> values = {2, 6, 4, 9, 1, 7, 99, 22, 0};
    stack<int> st;
    for (int val : values) {
        st.push(val); // last element will be on top
    }

    SortStack(st);

    // Print sorted stack
    cout << "Sorted stack (smallest at bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
