#include <iostream>

using namespace std;

int largestOfThree(int a, int b, int c)
{
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

double largestOfThree(double a, double b, double c)
{
  double max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

int main()
{
  cout << "Parmi les 3 nombres | Le plus petit est" << endl;
  cout << "      3, 4, 5       |         " << largestOfThree(3, 4, 5) << endl;
  cout << "      4, 6, 3       |         " << largestOfThree(4, 6, 4) << endl;
  cout << "      0, 0, 0       |         " << largestOfThree(0, 0, 0) << endl;
  cout << "     1.2, 1.3, 1.4  |         " << largestOfThree(1.2,1.3,1.4) << endl;
  cout << "     3.14,3.10,2.99 |         " << largestOfThree(3.14,3.10,2.99) << endl;
  cout << "     1/2, 2/4, 3/5  |         " << largestOfThree((double)1/2, (double)2/4, (double)3/5) << endl;
  cout << "     1/2, 3/5, 4/5  |         " << largestOfThree((double)1/2, (double)3/5, (double)4/5) << endl;

  return 0;
}
