#include <cstdio>

using namespace std;

int main()
{
  char star = '*',
       space = ' ';


  for (int i = 1; i < 6; i++)
  {
    for (int j = 0; j < i; j++)
    {
      putchar(star);
    }
    putchar('\n');
  }

  for (int i = 1; i < 6; i++)
  {
    for (int j = 5; j > i; j--)
    {
      putchar(star);
    }
    if (i < 5)
      putchar('\n');
  }

  return 0;
}
