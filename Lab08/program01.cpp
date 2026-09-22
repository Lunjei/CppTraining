#include <iostream>

#define SIZE 10

using namespace std;

void displayArray(int* array, int size)
{
  if (size <= 0)
    cout << "Error, size must be strictly positive." << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "-i -> " << array[i] << endl;
  }
}

int main()
{
  int a[SIZE] = {3,2,5,7,14,2,-5,8,-55,652};
  displayArray(a, SIZE);

  return 0;
}
