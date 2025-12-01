#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += arr[k];
      }
      if (sum > target)
      {
        target = sum;
      }
    }
  }
  cout << target;

  return 0;
}