// Print the result of the addition, subtraction, product, division
// of two numbers entered by the user

#include <iostream>

int main()
{
  int number1 = 0,
      number2 = 0;

  std::cout << "Enter the first number: " << std::endl;
  std::cin >> number1;
  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  std::cout << "The addition of those two numbers is: " << number1 + number2 << std::endl;
  std::cout << "The subtraction of those two numbers is: " << number1 - number2 << std::endl;
  std::cout << "The product of those two numbers is: " << number1 * number2 << std::endl;
  std::cout << "The division of those two numbers is: " << (float) number1 / number2 << std::endl;

  return 0;
}
