#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;

  cin >> str;
  cout << str;
  // getline
  cin.ignore();
  string str2;
  getline(cin, str2);
  cout << str2<<endl;

  //for each
  for(char ch: str2)
  {
    cout<<ch<<",";
  }

  //string length
  cout<<str.length()<<endl;

  //string .at
  cout<<str.at(3)<<endl;

  //substr : substring 
  cout<<str.substr(2,5)<<endl;

  //find
  cout<<str.find("loves");
  
  return 0;
}