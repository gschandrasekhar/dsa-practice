#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={2,-3,6,-5,4,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=INT_MIN;
   for(int i=0;i<n;i++)
   {
    int curSum=0;
    for(int j=i;j<n;j++)
    {
      curSum+=arr[j];
      sum=max(curSum,sum);
    }
   }
   cout<<sum;
   return 0;
}