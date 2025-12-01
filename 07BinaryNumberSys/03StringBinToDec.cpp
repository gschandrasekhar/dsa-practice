#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   cin>>num;
   string str="";
   while(num!=0)
   {
      if(num%2==0)
        str='0'+str;
      else
        str='1'+str;
      num=num/2;
   }
   cout<<str;
  return 0;
}