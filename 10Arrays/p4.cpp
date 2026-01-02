/* 
Check if the Array is Sorted I
Easy

Company
Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.


Example 1

Input: n = 5, arr = [1,2,3,4,5]



Output: True



Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2

Input: n = 5, arr = [5,4,6,7,8]



Output: False



Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False. Here element 5 is not smaller than or equal to its future elements.

Example 3

Input: n = 5, arr = [5,4,3,2,1]

Output:

False
Constraints

1 ≤ n ≤ 106
- 109 ≤ arr[i] ≤ 109
*/

#include <bits/stdc++.h>
using namespace std;
int BrutForce(int arr[],int n)
{

  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      if(arr[i]>arr[j]) return false;
    }
  }
  return true;
}

bool Optimised(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
    if(arr[i-1]>arr[i])  return false;
   }
   return true;
}

int main()
{
  int n=5;
  int arr[]={1,2,3,4,5};
  cout << BrutForce(arr,n) << endl;
  cout << Optimised(arr,n) << endl;
  return 0;
}