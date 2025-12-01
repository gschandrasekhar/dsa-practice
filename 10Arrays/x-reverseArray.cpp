#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    
  }
  int revarr[n];
  int j=0;
  for(int i=n-1;i>=0;i--)
  {
    revarr[j]=arr[i];
    j++;
    
    
  }
  for(int i=0;i<n;i++)
  {
    cout<<revarr[i]<<" ";
  }

  return 0;
}