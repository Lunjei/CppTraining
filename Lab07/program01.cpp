#include <iostream>

using namespace std;

double power(double x, int y)
{
  if (y == 0)
    return 1;
  else if (y == 0)
    return 0;
  else if (y < 0)
    return power(x, y + 1) / x;
  else
    return power(x, y - 1) * x;
}

int main()
{
  cout << "2^3 = " << power(2, 3) << endl;
  cout << "(-5) ^ -1 = " << power (-5, -1) << endl;
  cout << "pi^2 = " << power(3.141592, 2) << endl;
  cout << "2.1^-3 = " << power((double)2.1, -3) << endl;

  return 0;
}
