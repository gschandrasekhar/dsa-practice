#include<bits/stdc++.h>
using namespace std;

int main()
{
  set<int> st;
  st.insert(1);
  st.insert(4);
  st.insert(2);
  st.insert(4);

  //to find the element ;
 // cout<<st.find(2);  //index positon where it was located

 //count: 
 cout<<st.count(4)<<endl;  
 //

  return 0;
}