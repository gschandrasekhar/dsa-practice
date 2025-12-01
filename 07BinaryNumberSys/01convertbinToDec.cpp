//convert binary to decimal
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int d=0,dec=0,i=0;
  while(n>0)
  {
   d=n%10;
   dec=dec+ pow(2,i)*d;
   n=n/10;
   i++;
  }
  cout<<dec;
  return 0;
}