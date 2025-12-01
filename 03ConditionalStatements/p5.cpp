///build a calci
#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  char ch;
  cin>>num1>>num2;
  cout<<"enter operation";
  cin>>ch;
  switch(ch)
  {
    case '+': cout<<(num1+num2);
              break;
    case '-': cout<<(num1-num2);
              break;
    case '*': cout<<(num1*num2);
              break;
    case '/': cout<<(num1/num2);

              break;
    default : cout<<"Invalid operator";
  }
  return 0;
}