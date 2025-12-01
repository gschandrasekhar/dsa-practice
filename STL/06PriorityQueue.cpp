#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;  // by default -> max heap (largest element at top)
    
    priority_queue<int, vector<int>, greater<int>> dq;  //smallest elemeent will e top 
    // insert elements
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.emplace(40);

    // top element (largest because it's a max-heap)
    cout << pq.top() << " top elem" << endl;  // 40

    // size of priority queue
    cout << "size " << pq.size() << endl;     // 4

    // check if empty
    cout << pq.empty() << endl;  // 0 -> not empty

    // remove element (pops the top element)
    pq.pop();  

    cout << "new top after pop: " << pq.top() << endl;  // 30

    return 0;
}
