#include <iostream>

using namespace std;

int gcdRec(int a, int b)
{
  if (a <= 1 || b <= 1)
    return 1;
  else
  {
    for (int i = 2; i <= a; i++)
    {
      if (a % i == 0 && b % i == 0)
        return i * gcdRec(a / i, b / i);
    }
    return 1;
  }
}

int main()
{
  cout << gcdRec(5, 25) << endl;
  cout << gcdRec(27, 9) << endl;
  cout << gcdRec(144, 216) << endl;
  cout << gcdRec(9, 8) << endl;

  return 0;
}
