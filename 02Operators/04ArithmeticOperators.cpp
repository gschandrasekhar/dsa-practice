#include<iostream>
using namespace std;
int main()
{ 
  int a=10;
  int b=5;
  cout<<(a+b)<<endl;
  cout<<(a-b)<<endl;
  cout<<(a*b)<<endl;
  cout<<(a/b)<<endl;
  cout<<(a%b)<<endl;
  //use and update (post paid)
  cout<<(a++)<<endl;
  //pay and use (prepaid)
  cout<<(++b)<<endl;

  return 0;
}