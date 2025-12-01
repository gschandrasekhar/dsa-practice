#include<bits/stdc++.h>
using namespace std;
int main()
{  int age;
cout<<"enter youy age";
cin>>age;
if(age>0 && age<18)
    cout<<"you are not an  adult";
else if(age>=18)
    cout<<"you are an adult";
else 
   cout<<"Enter crct age";

int marks;
cout<<"enter ur marks";
cin>>marks;
if(marks<25 && marks>0)
  cout<<"F";
else if(marks>=25 && marks<=44)
  cout<<"E";
else if(marks>=45 && marks<=49)
   cout<<"D";
else if(marks>=50 && marks<=59)
  cout<<"C";
else if(marks>=60 && marks<=79)
  cout<<"B";
else if(marks>=80 && marks<=100)
  cout<<"A";
else
 cout<<"enter ccrt marks";
    return 0;

}