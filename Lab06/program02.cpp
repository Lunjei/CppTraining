#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

float circumference(float radius)
{
  // Circle circumference
  return 2 * numbers::pi * radius;
}

float circumference(float height, float width)
{
  // Rectangle circumference
  return 2 * (height + width);
}

float circumference(float a, float b, float c)
{
  // Triangle circumference
  return a + b + c;
}

float circumference(double side)
{
  // Square Area
  return (float)side * 4;
}

int main()
{
  cout << "Circumference of a square of a size of 5: " << circumference((double)5) << endl;
  cout << "Circumference of a Rectangle of height 3 and width 5: " << circumference(3.0, 5.0) << endl;
  cout << "Ccumference of a Triangle of side 3, 4 and 5: " << circumference(3.0, 4.0, 5.0) << endl;
  cout << "Circumference of a Circle of a radius of 5: " << circumference((float)5) << endl;

  return 0;
}
