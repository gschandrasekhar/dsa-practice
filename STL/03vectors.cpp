#include<bits/stdc++.h>
using namespace std;

int main()
{
  //Vectors: dynamic array which can automatically resize itself;
  vector<int> v1;   //empty container
  vector<int> vec1={1,2,3,4,5,6};
  vector<int> vec2(5,8);  //88888


  //insertion  1.push_back: adding elements at end;

  v1.push_back(1);
  v1.push_back(2);
  v1.emplace_back(2);
  //2.front : 

  //to know the size 
  cout<<v1.size()<<endl;
  cout<<"capacity"<<v1.capacity()<<endl;

  //iterator
  vector<int> v2={1,2,3,4,5,6,7};
  for(auto i:v2)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  //reverse iterator
  auto reverseBegin=v2.rbegin();
  auto reverseEnd=v2.rend();
  for(auto i=reverseBegin;i<reverseEnd;i++)
  {
    cout<<*i<<" ";
  }
  cout<<endl;

  //taking elements from another vec
  vector<int> dupVec(vec2);
  for(auto i: dupVec)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  //front :first element
  cout<<vec1.front()<<endl;  //1
  //back: last elemrnt
  cout<<vec1.back()<<endl;  //6

  //pop //to remove last element
  vec1.pop_back();   //6 removed

  //erase: 

  //clear: to clear all the elements 
  vec2.clear();

  //swap
  vector<int> p1={1,2,3};
  vector<int> p2={4,5,6};
  swap(p1,p2);
  for(auto it: p1)
  {
    cout<<it<<" ";
  }
  cout<<endl;
  return 0;
}