#include<bits/stdc++.h>
using namespace std;
int main()
{   //dequeue
deque<int> dq;
//stack
stack<int> st;

//queue
queue<int> q;

//priority queue: the guy who is have lasrgest value will stands top/first
priority_queue<int>pq;
pq.push(5);
pq.push(2); //{5.2}
pq.push(8);  //{8,5,2}
pq.push(10);  //{10,8,5,2}

cout<<pq.top();   //10
pq.top();  //{8,5,2}


//to keep minimum element in top/ minimumheap
priority_queue<int,vector<int>,greater<int>> qp;
qp.push(5); //{5}
qp.push(2);  //{2,5}
qp.push(8); //{2,5,8}
qp.emplace(10);  //{2,5,8,10}
cout<<qp.top();

//time cmplexity of
//push O(logn)
//top O(log n)
//pop  O(1)

//----------
//set: everything unique and sorted roder
set<int> s1;
s1.inserr(1);
s1.insert(2);
s1.insert(2);
s1.insert(0);
s1.insert(4);

    return 0;
}