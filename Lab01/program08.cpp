// Calculate the area of a scalene triangle
// which the size is given by the user.

#include <iostream>
#include <cmath>

int main()
{
  float a, b, c;
  float s;          // semiPerimeter

    std::cout << "Enter the size of the scalene triangle, 3 floats: " << std::endl;
    std::cin >> a >> b >> c;
    
    if (a <= 0 || b <= 0 || c <= 0)
    {
      std::cout << "Value must be positive" << std::endl;
    }
    else
    {
      s = (a + b + c) / 2;
      std::cout << "the area of the triangle is: " << std::sqrt(s * (s - a) * (s - b) * (s - c)) << std::endl;
    }

    return 0;
}
