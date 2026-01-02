/*
Reverse an array
Easy

Company
Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


Example 1

Input: n=5, arr = [1,2,3,4,5]



Output: [5,4,3,2,1]



Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Example 2

Input: n=6, arr = [1,2,1,1,5,1]



Output: [1,5,1,1,2,1]



Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

Example 3

Input: n=3, arr = [1,2,1]

Output:

[1,2,1]
Constraints

1 <= n <= 104

1 <= arr[i] <= 105
*/

#include <bits/stdc++.h>
using namespace std;
void BrutForce(int arr[],int n)
{
  int rev[n];
  int j=n-1;
  for(int i=0;i<n;i++)
  {
    rev[j]=arr[i];
    j--;
  }
  for(int i=0;i<n;i++)
  {
    cout<<rev[i]<<",";
  }
}

int Optimised(int arr[],int n)
{ int left=0, right=n-1;
  while(left<right)
  {
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<",";
  }
}

int main()
{
  int n=5;
  int arr[]={1,2,3,4,5};
 
  BrutForce(arr,n);
  cout<<endl;
 Optimised(arr,n);
  return 0;
}