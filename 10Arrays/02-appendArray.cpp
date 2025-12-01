#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[10]={1,2,3,4,5};
  int x;
  cin>>x;
int  num=5;
  A[num]=x;
  num++;
  for(int i=0;i<num;i++)
  {
    cout<<A[i]<<" ";
  }
  return 0;

}