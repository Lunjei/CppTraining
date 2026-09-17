#include <cstdio>

using namespace std;

int main()
{
  char star = '*',
       space = ' ';

  for (int i = 1; i < 6; i++)
  {
    for (int j = 5; j > i; j--)
    {
      putchar(space);
    }
    for (int j = i; j > 0; j--)
    {
      putchar(star);
    }
    putchar('\n');
  }

  return 0;
}
