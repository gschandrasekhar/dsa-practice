#include <iostream> // header files
using namespace std;

int main()
{ int a=10;
  int b=3;
  int c=10;
  if(a>b && b<c)
  {
    cout<<"AND operator"<<endl;
  }
  if(a==b || b<c)
  {
    cout<<"OR operator"<<endl;
  }
  if(a!=0)
  {
    cout<<"Not Operator"<<endl;
  }
  return 0;
}