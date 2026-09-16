// Calculate the area and the circumference of a circle
// where the radius is given by the user

#include <iostream>
#include <numbers>

int main () 
{
  float radius;

  std::cout << "Enter the radius: " << std::endl;
  std::cin >> radius;
  if (radius >= 0)
  {
    std::cout << "The area of the circle is:          " << radius * std::numbers::pi * std::numbers::pi<< std::endl;
    std::cout << "The circumference of the cercle is: " << radius * 2 * std::numbers::pi << std::endl;
  }
  else
  {
    std::cout << "Radius must be positive." << std::endl;
  }
  return 0;
 }
