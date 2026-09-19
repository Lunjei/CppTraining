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
  float semiSum = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

float area(double side)
{
  // Square Area
  return (float)side * side;
}

int main()
{
  
  return 0;
}
