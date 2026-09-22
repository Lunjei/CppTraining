#include <iostream>

#define SIZE 10

using namespace std;

double averageArray(int* array, int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += array[i];
  }
  return (double)sum / size;
}

int main()
{
  int a[SIZE] = {2,5,-5,34,23,506,-403,-24,45,12};
  cout << averageArray(a, SIZE) << endl;
  
  return 0;
}
