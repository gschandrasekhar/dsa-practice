/*
Return the Largest Digit in a Number
Easy

Company
You are given an integer n. Return the largest digit present in the number.


Example 1

Input: n = 25

Output: 5

Explanation: The largest digit in 25 is 5.

Example 2

Input: n = 99

Output: 9

Explanation: The largest digit in 99 is 9.

Example 3

Input: n = 1

Output:

1
Constraints

0 <= n <= 5000
n will contain no leading zeroes except when it is 0 itself.
*/
#include <bits/stdc++.h>
using namespace std;
int BrutForce(int n)
{int digit=0, largest=0;

    while(n>0)
    {
        digit=n%10;
        if(digit>largest) largest=digit;
        n=n/10;

    }
    return largest;
}

int Optimised(int n)
{
}

int main()
{
  int n;
  cin >> n;
  cout << BrutForce(n) << endl;
 
  return 0;
}