#include <iostream>
#include <cstdlib>

#define SIZE 5

using namespace std;

void mergedArray(int* array1, int size1, int* array2, int size2,int * array)
{
  int i1 = 0;
  int i2 = 0;
  
  for (int i = 0; i < size1 + size2; i++)
  {
    if (array1[i1] < array2[i2])
    {
      array[i] = array1[i1];
      i1++;
    }
    else
    {
      array[i] = array2[i2];
      i2++;
    }
  }
}

int main()
{
  int array1[5] = {1,2,5,7,12},
      array2[7] = {3, 5, 9, 12, 12, 13, 17};
  int* array = static_cast<int*>(malloc(sizeof(int) * 12));

  mergedArray(array1, 5, array2, 7, array);
  for (int i = 0; i < 12; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
