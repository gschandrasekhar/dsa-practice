//sum of odd digits using while loop
#include<iostream>
using namespace std;
int main()
{
  int num=10829;
  int sum=0,d=0;
  while(num>0)
  {
    d=num%10;
    if(d%2!=0)
    sum+=d;
    num=num/10;

  }
  cout<<sum;
  return 0;
}