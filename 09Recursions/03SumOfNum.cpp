#include<iostream>
using namespace std;
int Natural(int n)
{
  if(n==1)
   return 1;
  return n+Natural(n-1);
}
int main() 
{
  int n;
  cin>>n;
   cout<<Natural(n);
   return 0;

}