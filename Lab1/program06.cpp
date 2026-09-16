// Calculate the quotient and the remainder of two numbers entered by the user.

#include <iostream>

int main()
{
  int number1,
      number2;

  std::cout << "Enter the two numbers: " << std::endl;
  std::cin >> number1 >> number2;

  if (number2 == 0)
  {
    std::cout << "On ne peut pas diviser par 0." << std::endl;
  }
  else 
  {
    std::cout << "The quotient is:  " << number1 / number2 << std::endl;
    std::cout << "The remainder is: " << number1 % number2 << std::endl;
  }

  return 0;
}
