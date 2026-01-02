/*
You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.



A prime number is a number which has no divisors except, 1 and itself.


Example 1

Input: n = 6

Output: 3

Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

Example 2

Input: n = 10

Output: 4

Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.

Example 3

Input: n = 20

Output:

8
Constraints

2 <= n <= 1000*/
#include <bits/stdc++.h>
using namespace std;
bool primes(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
int BrutForce(int n)
{
   int count=1;
    for(int i=3;i<=n;i++)
    {
        if(primes(i))count++;
        
    }
    return count;
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