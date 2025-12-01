//Armstrong number or not
#include<iostream>
using namespace std;

int main()
{
  int num,d=0,arm=0;
  cin>>num;
  int copy=num;
  while(num>0)
  {
    d=num%10;
    arm=arm+d*d*d;
    num=num/10;

  }
  if(arm==copy)cout<<"Armstrong";
  else cout<<"Not a armstrong";
  return 0;
  
}