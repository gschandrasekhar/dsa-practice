#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str1="anagram";
  int n=str1.length();
  string str2="nagaram";
  sort(str1.begin(),str1.end());
  cout<<str1;
  sort(str2.begin(),str2.end());
  cout<<(str1==str2);
  
  return 0;
}