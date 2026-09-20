#include <iostream>

using namespace std;

int recursiveSum(int n)
{
  if (n == 0)
    return 0;
  else if (n > 0)
    return n + sum(n - 1);
  else
    return n + sum(n + 1);
}

int main()
{

  return 0;

}
