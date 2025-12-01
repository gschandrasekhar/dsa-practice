#include <bits/stdc++.h>
using namespace std;
int main()
{
  int *A;
  int size;
  int length;
  cin >> size;
  A = new int[size];
  cout << "enter the number of numbers";
  for (int i = 0; i < size; i++)
  {
    cin >> A[i];
  }
  //cout<<A.length();  //we cannot use this function for dynamic arrays we need to store manually
  cout<<"All elements are";
  for (int i = 0; i < size; i++)
  {
    cout<<A[i]<<" ";
  }
 
  delete []A;  //Free allocated memory
  
  return 0;
}