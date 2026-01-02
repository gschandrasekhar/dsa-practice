/*
Check if the Number is Armstrong
Easy

Company
You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


Example 1

Input: n = 153

Output: true

Explanation: Number of digits : 3.

13 + 53 + 33 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number.

Example 2

Input: n = 12

Output: false

Explanation: Number of digits : 2.

12 + 22 = 1 + 4 = 5.

Therefore, it is not an Armstrong number.

Example 3

Input: n = 370

Output:

true
*/
#include <bits/stdc++.h>
using namespace std;
bool BrutForce(int n)
{
   int digit=0, sum=0, copy=n;
    
    int count=log10(n)+1;
      while(n>0)
      {
        digit=n%10;
        sum=sum+ pow(digit,count);
        n=n/10;
      }
      if(copy==sum) return true;
      return false;
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