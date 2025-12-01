#include<bits/stdc++.h>
using namespace std;

int main()
{  //list is a container which is dybmic in nature
  list<int> l1;
  l1.push_back(2); //{2}
  l1.push_front(3);  //{3,2}
  l1.emplace_back(5);  //{3,2,5}
  l1.emplace_front(); //{2,5}

  //rest fucniyion are same
  return 0; 
}