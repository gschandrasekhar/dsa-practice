#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 6;
  int i;
  cin >> i;
  int k = 1 << i;
  if ((k & n) > 0)
    cout << "1";
  else
    cout << "0";
  return 0;
}