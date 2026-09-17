#include <cstdio>

using namespace std;

int main()
{
  char star = '*',
       space = ' ';

  for (int i = 1; i < 6; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      putchar(star);
    }
    putchar('\n');
  }

  return 0;
}
