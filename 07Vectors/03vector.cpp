#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vec1;
  vector<int> vec2 = {1, 2, 3, 4};
  vector<int> vec3(5, -1);
  cout << vec1.size() << endl;
  cout << vec2.size() << endl;
  cout << vec3.size() << endl;
  //to print values : foreach
  for(int i: vec2)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  //for loop
  for(int i=0;i<vec3.size()-1;i++)
  {
    cout<<vec3[i];
  }
  cout<<endl;

  //to print capacity
  cout<<vec2.capacity()<<endl;
  vec2.push_back(5);
    cout<<vec2.capacity()<<endl;


    //adding element operations
    
  return 0;
}