#include <iostream>
#include <cstdlib>

using namespace std;
void insert(int* array, int size, int add, int* resultArray)
{
  for (int i = 0; i < size; i++)
    resultArray[i] = array[i];
  resultArray[size] = add;
}
int main()
{
  int array[5] = {1,2,3,4,5};
  int add = 6;
  int *array2 = static_cast<int*>(malloc(sizeof(int) * 6));

  insert(array, 5, add, array2);

  for (int i = 0; i < 6; i++)
    cout << array2[i] << endl;

  free(array2);
  return 0;
}
