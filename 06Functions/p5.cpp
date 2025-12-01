//waf to find the binomail codefficent for given n & r;
#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0)
   return 1;
  return n*fact(n-1);
}

int bino(int n, int r)
{
   int a=fact(n);
   int b=fact(r);
   int c=fact(n-r);
   cout<<a<<b<<endl;

   return (a/(b*c));
}
int main()
{
  int n,r;
  cin>>n>>r;
  cout<<bino(n,r);

  return 0;
}