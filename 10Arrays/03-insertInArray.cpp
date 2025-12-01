#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int A[10]={1,2,3,4};
  int length=4;
  int index,x;
  cin>>index>>x;
  for(int i=length;i>index;i--)
  {
    A[i]=A[i-1];

  }
  A[index]=x;
  length++;
for(int i=0;i<length;i++)
{
  cout<<A[i]<<" ";
}
  return 0;
}