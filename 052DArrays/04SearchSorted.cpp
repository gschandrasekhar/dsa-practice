#include <iostream>
using namespace std;

int main()
{
  int n = 4, m = 4;
  int arr[n][m] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
  int i = 0;
  int j = m - 1;
  int key;
  cin >> key;
  while (i < n && m >= 0)
  {
    if (arr[i][j] == key)
    {
      cout << "Founf at " << i << j << endl;
      return 0;
    }
    else if(arr[i][j]>key)
    {
      j--;
    }
    else
    {
      i++;
    }
   
  }
  cout<<"not found";
   return 0;
}