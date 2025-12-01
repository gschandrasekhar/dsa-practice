#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 1. Initialization
  list<int> ls;
  list<int> ls1 = {1, 2, 3};
  list<int> ls2(5, 100); // {100,100,100,100,100}
  list<int> ls3(ls1);    // copy

  // 2. Insertion
  ls1.push_back(10);     // {1,2,3,10}
  ls1.emplace_back(20);  // faster insertion
  ls1.push_front(0);     // {0,1,2,3,10,20}
  ls1.emplace_front(-1); // {-1,0,1,2,3,10,20}

  // insert at specific position (iterator)
  auto it = ls1.begin();
  advance(it, 3);     // move iterator to 3rd index
  ls1.insert(it, 99); // insert before 3rd index

  // 3. Access
  cout << "Front=" << ls1.front() << " Back=" << ls1.back() << "\n";

  // 4. Deletion
  ls1.pop_front();                 // remove first
  ls1.pop_back();                  // remove last
  ls1.erase(next(ls1.begin(), 2)); // erase at position

  // remove all occurrences of 3
  ls1.remove(3);

  // 5. Size & Clear
  cout << "Size=" << ls1.size() << "\n";
  ls1.clear();

  // 6. Operations unique to list
  list<int> a = {1, 2, 3};
  list<int> b = {4, 5, 6};
  a.swap(b); // swap lists

  // merge (both must be sorted)
  list<int> m1 = {1, 3, 5};
  list<int> m2 = {2, 4, 6};
  m1.merge(m2); // m1={1,2,3,4,5,6}, m2 empty

  // remove consecutive duplicates
  list<int> dups = {1, 1, 2, 2, 3, 3, 3, 4};
  dups.unique(); // {1,2,3,4}

  // reverse
  dups.reverse(); // {4,3,2,1}

  // sort
  dups.sort(); // {1,2,3,4}

  // 7. Iterate
  cout << "List elements: ";
  for (auto x : dups)
    cout << x << " "; // range-for
  cout << "\n";
}
