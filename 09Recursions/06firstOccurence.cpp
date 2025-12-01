#include<bits/stdc++.h>
using namespace std;

int FOcc(vector<int> v1, int i, int target)
{ if(i==0)
   return -1;
  if(v1[i]==target)
    return i;
  
    return FOcc(v1, i-1, target);
}
int main()

{
  vector<int> v1={1,2,3,3,4};
  int target=3;
  cout<<FOcc(v1,5,target);
  return 0;
}