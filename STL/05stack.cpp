#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // 1. Push elements
    st.push(10);           // add at top
    st.push(20);
    st.emplace(30);        // faster insertion

    // 2. Top element
    cout << "Top = " << st.top() << "\n";  // 30

    // 3. Pop element
    st.pop();              // removes 30
    cout << "Top after pop = " << st.top() << "\n"; // 20

    // 4. Size
    cout << "Size = " << st.size() << "\n"; // 2

    // 5. Empty check
    cout << (st.empty() ? "Empty\n" : "Not Empty\n");

    // 6. Swap two stacks
    stack<int> st1, st2;
    st1.push(1); st1.push(2);
    st2.push(5); st2.push(6);
    st1.swap(st2);
    cout << "New top after swap = " << st1.top() << "\n"; // 6
}
