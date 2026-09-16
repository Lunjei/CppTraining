// Compute the area of a right triangle size given by the user.

#include <iostream>

int main()
{
  float a, b;

  std::cout << "Enter the 2 size close to the right angle of the triangle." << std::endl;
  std::cin >> a >> b;

  if (a < 0 || b < 0)
    std::cout << "The size must be positive or nul." << std::endl;
  else
  {
    std::cout << "The area of the right triangle is: " << a * b / 2 << std::endl;
  }

  return 0;
}
