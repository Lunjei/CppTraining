// Compute the area of an equilateral triangle

#include <iostream>
#include <cmath>

int main()
{
  float c;

  std::cout << "Enter the size of the equilateral triangle: " << std::endl;
  std::cin >> c;

  if (c < 0)
  {
    std::cout << "The size is positive or nul." << std::endl;
  }
  else
  {
    std::cout << "The area of the equilateral triangle is: " << c * c * std::sin(std::numbers::pi / 3) << std::endl;
  }

  return 0;
}
