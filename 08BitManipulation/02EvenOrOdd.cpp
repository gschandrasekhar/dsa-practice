#include<bits/stdc++.h>
using namespace std;
bool oddOrEven(int n)
{
  if((n&1)==0)
   return true;
  else 
    return false;
};
int main()
{
  int a=6;
  bool b= oddOrEven(a);
  if(b==true)
  cout<<"Even";
  else 
   cout<<"Odd";
  return 0;
}