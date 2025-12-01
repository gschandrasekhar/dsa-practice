#include <iostream>
using namespace std;
int reverse(int n)
{
  if (n > 0)
  {
    cout << n << " ";

    reverse(n - 1);
  }
  return 0;
}
int main()
{
  int n;
  cin >> n;
  cout << reverse(n);
  return 0;
}