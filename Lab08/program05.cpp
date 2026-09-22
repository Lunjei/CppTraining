#include <iostream>
#include <cstdlib>

using namespace std;

void deleteInt(int *arrayInit, int *arrayFinal, int size, int deleted)
{
  int j = 0;
  int flag = 0;

  for (int i = 0; i < size; i++)
  {
    if (arrayInit[i] == deleted && flag == 0)
    {
      flag = 1;
    }
    else
    {
      arrayFinal[j] = arrayInit[i];
      j++;
    }
  }
}

int main()
{
  int arrayInit[5] = {1,2,3,4,5};
  int *arrayFinal = static_cast<int*>(malloc(sizeof(int) * 5));

  deleteInt(arrayInit, arrayFinal, 5, 3);
  for (int i = 0; i < 4; i++)
  {
    cout << arrayFinal[i] << " ";
  }
  cout << endl;
  return 0;
}
