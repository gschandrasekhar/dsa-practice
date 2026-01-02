/*
Check for Perfect Number
Easy

Company
You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.



A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.


Example 1

Input: n = 6

Output: true

Explanation: Proper divisors of 6 are 1, 2, 3.

1 + 2 + 3 = 6.

Example 2

Input: n = 4

Output: false

Explanation: Proper divisors of 4 are 1, 2.

1 + 2 = 3.

Example 3

Input: n = 28

Output:

true
Constraints

1 <= n <= 5000
*/
#include <bits/stdc++.h>
using namespace std;
bool BrutForce(int n)
{
  int sum=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)sum+=i;
  }
  if(sum==n) return true;
  return false;
}

int Optimised(int n)
{
  int sum=1;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      sum+=i;
      if(n/i!=i)
      {
        sum+=n/i;
      }
    }
    if(sum==n) return true;
    return false;

  }

}

int main()
{
  int n;
  cin >> n;
  cout << BrutForce(n) << endl;
  cout << Optimised(n) << endl;
  return 0;
}