#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={7,1,5,3,6,4};
   int n=sizeof(arr)/sizeof(arr[0]);
//    int min=INT_MAX;
//    int max=0;
//    for(int i=0;i<n;i++)
//    {
//     if(min>arr[i])
//      min=i;
//    }
//    cout<<min<<endl;
//    for(int j=min;j<n;j++)
//    {
//     if(max<arr[j])
//       max=j;
//    }
// cout<<max<<endl;
//    cout<<arr[max]-arr[min];

int MaxProfit=0;
int curProfit=INT_MIN;
for(int i=0;i<n;i++)
{
  for(int j=i;j<n;j++)
  {
    curProfit=arr[j]-arr[i];
    MaxProfit=max(curProfit, MaxProfit);
  }
}
cout<<MaxProfit;
  return 0;
}