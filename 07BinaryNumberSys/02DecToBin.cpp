//convert binary to decimal
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int d=0,pow=1, binNum=0;
  while(n>0)
  {
    d=n%2;
    binNum+=d*pow;
    n=n/2;
    pow=pow*10;

  }
  cout<<binNum;
  return 0;
}