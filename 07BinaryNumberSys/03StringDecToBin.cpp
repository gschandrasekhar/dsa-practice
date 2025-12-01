#include<bits/stdc++.h>
using namespace std;
int main()
{

  string str;
  cin>>str;
  int n=str.size();
  int dec=0,j=0;
  for(int i=n-1;i>=0;i--)
  {
    if(str[i]=='1')
      dec=dec+pow(2,j);
    
    j++;
  }
  cout<<dec;
  return 0;
}