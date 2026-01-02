/*
GCD of Two Numbers
Easy

Company
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


Example 1

Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Example 2

Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.

Example 3

Input: n1 = 6, n2 = 12

Output:

6
*/
#include <bits/stdc++.h>
using namespace std;
int BrutForce(int n1,int n2)
{
  int largest =1;
  for(int i=2;i<=min(n1,n2);i++)
  {
    if(n1%i==0&& n2%i==0) largest=i;
  }
  return largest;
}

int Better(int n1,int n2)
{
  for(int i=min(n1,n2);i>1;i--)
  {
    if(n1%i==0&& n2%i==0) return i;
  }
}
int Optimised(int n1,int n2)
{
  while(n1!=n2)
  {
    if(n1>n2)
    n1=n1%n2;
    else{
      n2=n2%n1;
    }

    if(n1==0) return n2;
    else return n1;
  }
}

int main()
{
  int n1,n2;
  cin >> n1>>n2;
  cout << BrutForce(n1,n2) << endl;
  cout<<Better(n1,n2)<<endl;
  cout << Optimised(n1,n2) << endl;
  return 0;
}