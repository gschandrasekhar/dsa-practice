#include<iostream>
using namespace std;
//function: is a block of code which runs when it is called 
int Sum(int a, int b)  //declaration: fun name, return type and parameters
{     
  return a+b;  //defination: body of func
} 
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<Sum(a,b);
  return 0;
}