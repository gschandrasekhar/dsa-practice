//waf to check whether its a palindrome or not
#include<iostream>
using namespace std;

bool isPalindrome(int n)
{
  int cpy=n;
  int d,num=0;
  while(n>0)
  {
    d=n%10;
    num=num*10+d;
    n=n/10;
  }
  if(cpy==num)
    return true;
  else return false;
}

int main()
{
  int n;
  cin>>n;
 cout<< isPalindrome(n);
  return 0;
}