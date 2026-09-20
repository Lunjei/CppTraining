#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

float area(float radius)
{
  // Circle Area
  return numbers::pi * radius * radius;
}

float area(float height, float width)
{
  // Rectangle Area
  return height * width;
}

float area(float a, float b, float c)
{
  // Triangle Area
  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

float area(double side)
{
  // Square Area
  return (float)side * side;
}

int main()
{
  cout << "Area of a square of a size of 5: " << area((double)5) << endl;
  cout << "Area of a Rectangle of height 3 and width 5: " << area(3.0, 5.0) << endl;
  cout << "Area of a Triangle of side 3, 4 and 5: " << area(3.0, 4.0, 5.0) << endl;
  cout << "Area of a Circle of a radius of 5: " << area((float)5) << endl;

  return 0;
}
