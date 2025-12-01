#include<bits/stdc++.h>
using namespace std;

int main()
{
  //pair: to store more than one element in one variable
  pair<int,int> p1={2,8};
  //another way 
  pair<int,int> p2=make_pair(1,2);
  //to print 2
  cout<<p1.first<<" "<<p1.second<<endl;

  //int and char
  pair <int,char> p3={2,'b'};

  //nested pairs
  pair<pair<int,int>,int>p4={{1,2},3};
  cout<<p4.first.first<<" "<<p4.first.second<<" "<<p4.second<<endl;
  return 0;
}