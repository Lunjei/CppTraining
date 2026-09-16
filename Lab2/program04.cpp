#include <iostream>

using namespace std;

int main()
{
  char letter;

  cout << "Enter a letter." << endl;
  cin >> letter;

  if (letter == 'e' || letter == 'E' || letter == 'a' || letter == 'A'
      || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O'
      || letter == 'u' || letter == 'U' || letter == 'y' || letter == 'Y')
  {
    cout << "Your letter is a Vowel." << endl;
  }
  else
  {
    cout << "Your letter is a Consonant." << endl;
  }

  return 0;
}
