#include <cstdio>

using namespace std;

int main()
{
  char star = '*',
       space = ' ';

  int a = 0;

  for (int i = 1; i < 4; i++)
  {
    for (int j = 0; j < 3 - i; j++)
    {
      putchar(space);
    }
    for (int k = 0; k < i + a; k++)
    {
      putchar(star);
    }
    a += 1;
    putchar('\n');
  }

  return 0;
}
