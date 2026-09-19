#include <iostream>

using namespace std;

int main()
{
  int year = 0;
  cout << "Enter a year: " << endl;
  cin << year;

  if (year % 4 == 0 && year % 400 == 0 && year % 100 !=0)
    cout << "Your year is a leap." << endl;
  else {
    cout << "Your year is not a leap." << endl;
  }

  return 0;
}
