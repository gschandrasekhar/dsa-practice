// creating array inside stack and heap
#include <iostream>
using namespace std;
int main()
{
  int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // static array
  // size of the array is created at compile time
  int *p; // dynamic array
  p = new int[5];
  // to create a memory in heap , we have to use operator new
  // to assign values in dynamic array;

  p[0] = 1;
  p[1] = 3;
  p[2] = 5;
  p[3] = 7;
  p[4] = 9;

  // to display elements;
  for (int i = 0; i < 10; i++)
  {
    cout << A[i] << endl;
  }
  for (int i = 0; i < 5; i++)
  {
    cout << p[i] << endl;
  }
  // Deallocate the memory allocated for the dynamic array
  delete[] p;
  p = nullptr; // Set pointer to null to avoid dangling pointer

  return 0;
}