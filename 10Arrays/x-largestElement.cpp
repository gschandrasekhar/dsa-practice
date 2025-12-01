#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max = arr[0];
  int min=INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
    
    if(arr[i]<min)
      min=arr[i];
  }
  cout << "Max elem is: " << max <<" and min elem:"<<min;
  return 0;
}