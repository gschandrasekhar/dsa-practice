#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int i;
  cin>>i;
  int k=1<<i;
  //seith
  cout<<(num|k)<<endl;
  //clear ith
  int bitmask=~k;
  cout<<(num&bitmask)<<endl;
  return 0;
}