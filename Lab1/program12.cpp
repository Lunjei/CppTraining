// Compute the area and perimeter of a square size given by the user.

#include <iostream>

int main()
{
  float c;

  std::cout << "Enter the size of the square: " << std::endl;
  std::cin >> c;

  if (c < 0)
    std::cout << "Size must be positive." << std::endl;
  else {
    std::cout << "The area of the square is: " << c * c << std::endl;
  }

  return 0;
}
