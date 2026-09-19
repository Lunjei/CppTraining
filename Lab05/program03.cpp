#include <iostream>

using namespace std;

float minutes(int hours, int minutes, int seconds)
{
  return (float)hours * 60 + (float)minutes + (float)seconds / 60;
}

int main()
{
  int h = 2,
      m = 30,
      s = 30;

  cout << h << " hours, " << m << " minutes, " << s << " seconds." << endl;
  cout << "In minutes: " << minutes(h, m, s) << endl;

  return 0;
}
