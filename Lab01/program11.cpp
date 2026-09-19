// Compute the area and perimeter of a rectangle.

#include <iostream>

int main()
{
  float height, width;

  std::cout << "Enter the height and the width of the rectangle: " << std::endl;
  std::cin >> height >> width;

  if (height < 0 || width < 0)
    std::cout << "Size must be positive." << std::endl;
  else
  {
    std::cout << "Area is: " << height * width << std::endl;
    std::cout << "Perimeter is: " << 2 * (height + width) << std::endl;
  }

  return 0;
}
