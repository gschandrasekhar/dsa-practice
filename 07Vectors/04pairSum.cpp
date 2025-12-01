#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {2, 7, 11, 15};
  int target = 9;
  vector<int> vec1;
  //O(n^2)
  for (int i = 0; i < 4; i++)
  {
    
    for (int j =i;j<4;j++)
    { int curSum = 0;
      curSum+=arr[i]+arr[j];
      if(target==curSum)
       cout<<i<<j<<endl;
    }
  }

  //o(n)
  int start=0, end=4-1;
  int sum=0;
  while(start<end)
  {
    sum=arr[start]+arr[end];
    if(sum==target)
     {cout<<start<<" "<<end<<endl;
     return 0;}
    else if(sum<target)
     start++;
    else
     end--;
  }
  
  return 0;
}