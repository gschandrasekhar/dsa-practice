#include <iostream>
#include <cmath>
using namespace std;
int main()
{  int a=10;
// pointers: a special variable that storres address ofa another variable.
int *ptr=&a;
// size of pointer = 8 bytes
cout<<&a<<"==="<<ptr<<endl;
// bothe stores address of variable


cout<<*ptr<<endl;
//deferencing pointer
*ptr=20;
cout<<"a:"<<a<<"     ptr : "<<ptr<<"     *ptr: "<<*ptr<<endl;

int *ptr2=NULL;
//null pointer
cout<<ptr2<<endl;
//cout<<*ptr2;  //segmentation fault


int &b=a;  //reference varible
cout<<b;
  return 0;
}

