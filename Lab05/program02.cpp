#include <iostream>

using namespace std;

void swap(int* ptr1, int* ptr2)
{
  int tmp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = tmp;
}

int main()
{
  int a = 10,
      b = 20;

  cout << a << b << endl;
  swap(&a, &b);
  cout << a << b << endl;

  return 0;
}
