#include <bits/stdc++.h>
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
  int st = 0, end = n - 1;

  int target;
  cout << "Enter target" << endl;
  cin >> target;
  while (st <= end)
  {
    int mid = (st + end) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
    {
      st = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "Target not found";
  return 0;
}