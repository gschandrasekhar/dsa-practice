#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[]="Apna College";
  char str2[100];
  // str2="Apna college!";
  //string cpy
  strcpy(str2,"Hello World");
  //string concatenate
  strcat(str,str2);

  cout<<str<<endl;
  //strcmp
  cout<<strcmp(str,str2);

  return 0;
}