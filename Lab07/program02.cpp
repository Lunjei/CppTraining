#include <iostream>

using namespace std;

int recursiveSum(int n)
{
  if (n == 0)
    return 0;
  else if (n > 0)
    return n + recursiveSum(n - 1);
  else
    return n + recursiveSum(n + 1);
}

int main()
{
  cout << recursiveSum(0) << endl;
  cout << recursiveSum(-5) << endl;
  cout << recursiveSum(10) << endl;

  return 0;

}
