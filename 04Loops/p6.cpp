//check for prime or not
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
  int num;
  cin>>num;
  int count=0;
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
    count++;

  }
  if(count==0) cout<<"Prime Number";
  else cout<<"Not a prime Number";
  return 0;
}