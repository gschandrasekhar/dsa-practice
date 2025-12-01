// wap for a positive N, WAP  that prints  all the prime numbers  from 2 to N

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    int count = 0;
    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
        count++;
        break;
    }
    if (count == 0)
    {
      cout << i << "prime" << endl;
    }
  }
  return 0;
}