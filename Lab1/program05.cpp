// Add, subtract, multiply and divide 2 float numbers entered by the user.

#include <iostream>

int main()
{
  float number1,
        number2;

  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> number1 >> number2;

  std::cout << "Addition:    " << number1 + number2 << std::endl;
  std::cout << "Subtraction: " << number1 - number2 << std::endl;
  std::cout << "Multiply:    " << number1 * number2 << std::endl;
  std::cout << "Divide:      " << number1 / number2 << std::endl;
  
  return 0;
}
