#include <iostream>

using namespace std;

int main()
{
  float sum = 0;
  int   number;

  for (int i = 1; i < 8; i++)
  {
    number = 1;
    for (int j = 1; j <= i; j++)
    {
      number *= j;
    }
    sum += 1 / (float) number;
  }
  cout << sum << endl;

  return 0;
}
