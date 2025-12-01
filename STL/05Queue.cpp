#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // 1. Push elements
    q.push(10);
    q.push(20);
    q.emplace(30);   // faster than push
    q.push(40);

    // 2. Front and Back
    cout << "Front = " << q.front() << "\n"; // 10
    cout << "Back  = " << q.back() << "\n";  // 40

    // 3. Size
    cout << "Size = " << q.size() << "\n";   // 4
    //no capacity

    // 4. Pop (removes front)
    q.pop(); // removes 10
    cout << "Front after pop = " << q.front() << "\n"; // 20

    // 5. Empty check
    cout << (q.empty() ? "Empty\n" : "Not Empty\n");

    // 6. Swap two queues
    queue<int> q1, q2;
    q1.push(1); q1.push(2);
    q2.push(5); q2.push(6);
    q1.swap(q2);
    cout << "New front of q1 after swap = " << q1.front() << "\n"; // 5
}
