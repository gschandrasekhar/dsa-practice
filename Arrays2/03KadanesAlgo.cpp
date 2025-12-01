#include<bits/stdc++.h>
using namespace std;
int main()
{

  int arr[]={2,-3,6,-5,4,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=INT_MIN;
  int curSum=0;
  for(int i=0;i<n;i++)
  {
    curSum+=arr[i];
    if(curSum<0)
     curSum=0;
    sum=max(curSum, sum);

  }
  cout<<sum;
  return 0;
}