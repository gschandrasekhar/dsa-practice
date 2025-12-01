#include<bits/stdc++.h>
using namespace std;

int main()
{
  char word[]="shiva";
  int n=strlen(word);
  int start=0; int end=n-1;
  while(start<end)
  {
    swap(word[start],word[end]);
    start++;
    end--;
  }
  cout<<word<<endl;

  return 0;
}