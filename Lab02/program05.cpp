#include <iostream>

using namespace std;

int main()
{
  int number1,
      number2,
      number3;

  cout << "Enter the 3 value and I will give you the largest." << endl;
  cin >> number1 >> number2 >> number3;
  cout << "The largest value is ";
  if (number1 > number2 && number1 > number3)
    cout << number1;
  else if (number2 > number3)
    cout << number2;
  else
    cout << number3;
  cout << endl;

  return 0;
}
