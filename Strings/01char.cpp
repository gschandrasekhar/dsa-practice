#include<bits/stdc++.h>
using namespace std;
int main()
{

  char ch1='A';
  cout<<ch1<<endl;
  cout<<(int)ch1<<endl;

  //arrray of char
  char arr[5]={'a','b','c','d','\0'};

  //best way
  char work[]="code";
  cout<<arr[0]<<endl;
  //toprint all characters
  cout<<arr<<endl;

  cout<<work<<endl;
  //to print string length
  cout<<strlen(work)<<endl;
  //to upper case
  char word[]="Apple";
  int n=strlen(word);
  for(int i=0;i<n;i++)
  {
    if(word[i]>='a' && word[i]<='z')
    {
       word[i]=word[i]-'a'+'A';
    }
  }
  cout<<word<<endl;
  return 0;
}