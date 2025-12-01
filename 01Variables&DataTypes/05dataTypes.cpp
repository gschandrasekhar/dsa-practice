#include<iostream>
#include<iomanip>
//to set precision

using namespace std;

int main()
{ 


  //primitve
  //integer 4 bytes
  int marks=200;
  //character 1 byte
  char ch='A';
  //boolean 1 byte
  bool istrue=true;
  //floating point 4 bytes
  float f1=99.98f;
  //double floating point 8 bytes
  double a=213134321446.2313;
  cout<<"Int"<<sizeof(int)<<" "<<"char"<<sizeof(char)<<" "<<"Boolean"<<sizeof(bool)<<" "<<"float "<<sizeof(float)<<endl;
  return 0;
}