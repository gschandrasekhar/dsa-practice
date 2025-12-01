#include<bits/stdc++.h>
using namespace std;
int main()
{
  char word[]="racecar";
  int st=0, end=strlen(word)-1;
  while(st<end)
  {
    if(word[st++]!=word[end--])
    {
      cout<<"Not a palindrome";
      return 0;
    }
  }
  cout<<"IT's a palindrome";
  return 0;
}