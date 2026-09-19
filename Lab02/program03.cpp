#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Enter a Value: " << endl;
  cin >> number;

  if (number < 0)
    cout << "Your number is negative." << endl;
  else if (number == 0)
    cout << "Your number is null." << endl;
  else
    cout << "Your number is positive." << endl;

  return 0;
}
