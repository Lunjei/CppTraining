#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
  int *array1 = (int*)malloc(sizeof(int)*6);
  int *array2 = (int*)malloc(sizeof(int)*6);
  memset(array1, 0, 6);
  memset(array2, 0, 6);
  array1[0] = 1;
  array2[0] = 1;

  for (int l = 0; l < 6; l++)
  {
    for (int i = 0; i < 6; i++)
    {
      if (array1[i] == 0)
      {
        cout << " ";
      }
      else
      {
        cout << array1[i] << " ";
      }
    }
    for (int j = 1; j < 6; j++)
    {
      array2[j] = array1[j - 1] + array1[j];
      //cout << "Array2: " << array2[j] << " ";
    }
    for (int k = 0; k < 6; k++)
    {
      array1[k] = array2[k];
      //cout << "Array1: " << array1[k] << " ";
    }
    cout << endl;
  }
  return 0;
}
