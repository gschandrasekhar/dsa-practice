//create income tax calci
#include<iostream>
using namespace std;
int main()
{ int income;
  cin>>income;
  if(income> 10)
  {
    cout<<"30 percent tax";

  }
  else if(income>5) cout<<"20 percent";
  else if(income>0) cout<<"Not tax";
  else cout<<"enter crct amount";
  return 0;
}