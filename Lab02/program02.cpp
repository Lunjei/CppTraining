#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Enter a Value: " << endl;
  cin >> number;

  if (number % 2)
    cout << "Your number is Odd." << endl;
  else {
    cout << "You number is Even." << endl;
  }

  return 0;
}
