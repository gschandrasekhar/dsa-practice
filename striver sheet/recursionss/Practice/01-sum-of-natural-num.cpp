#include <iostream>
using namespace std;
int Sum(int n)
{
  if(n>0)
  {
    return n+Sum(n-1);
  }
  else
  {
    return 0;
  }
  // if (n == 0)
  // {
  //   return 0;
  // }
  // else
  // {
  //   return Sum(n - 1) + n;
  // }
}
int main()
{
  int n;
  cin>>n;
  cout << Sum(n);
  return 0;
}