// take year as input , let them know it is a leap year or normal year
#include <iostream>
using namespace std;
int main()
{
  int year;
  cin >> year;
  if (year % 4 == 0 && year%100==0)
  {
   if(year %400==0) cout<<"Leap year";
   else cout<<"not a leap year";
  }
  else if(year %4==0)
    cout << "leap year";
  else cout<<"Not a leap year";
    return 0;
}