//wap to find the input num is an armstrong or not
#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int cpy=num;
  int arm=0,d=0;
  while(num>0)
  {
    d=num%10;
    arm=arm+d*d*d;
    num=num/10;

  }
  if(arm==cpy) cout<<"Armstrong number";
  else cout<<"Not a armstrong number";
}