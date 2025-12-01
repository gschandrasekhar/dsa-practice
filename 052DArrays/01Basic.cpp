#include<bits/stdc++.h>
using namespace std;
int main()

{
  // 2D Array
  int student[2][3]={{100,100,100},{75,80,85}};
 int count=0;
  //Declaration
  int array[3][4];   //3 rows and 4 columns
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      //cin>>array[i][j];
      array[i][j]=count++;
    }
  }
  //output
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<array[i][j]<<",";
      
    }
    cout<<endl;
  }

  //printin of particular element;
  cout<<student[1][1];

  return 0;
}