#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//wap to print all primes in a range from 2 to n

bool isPrime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
     return false;
    
  }
  return true;
}

void prime(int n)
{
  for(int i=2;i<=n;i++)
  {
    if(isPrime(i))
     cout<<i;
  }

}
int main()
{  
  int n;
  cin>>n;
  prime(n);
  return 0;
}