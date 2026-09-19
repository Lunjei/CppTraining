#include <iostream>
#include <numbers>

using namespace std;

float circleArea(float radius)
{
  return 2 * numbers::pi * radius;
}

int main()
{
  for (int i = 0; i < 5; i++)
  {
    cout << "Circle of radius " << i << " is: " << circleArea((float)i) << endl;
  }

  return 0;
}
