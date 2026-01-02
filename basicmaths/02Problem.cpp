/*
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


Example 1

Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.

Example 2

Input: n = 123

Output: 321

Explanation: Reverse of 123 is 321.
*/
#include <bits/stdc++.h>
using namespace std;
int BrutForce(int n)
{
  int reverseNumber=0, digit=0;
      while(n>0)
      {
        digit=n%10;
        reverseNumber=reverseNumber*10+digit;
        n=n/10;

      }
      return reverseNumber;
}



int main()
{
  int n;
  cin >> n;
  cout << BrutForce(n) << endl;
 // cout << Optimised(n) << endl;  : no optimsed.
  return 0;
}