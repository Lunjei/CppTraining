#include <iostream>

using namespace std;

int main()
{
  float celsius = 0,
        kelvin = 0,
        fahrenheit = 0;
  char initial = 0,
       ending = 0;

  cout << "Enter your initial value unit: C for Celsius, K for Kelvin, F for Fahrenheit" << endl;
  cin >> initial;
  if (initial != 'C' || initial != 'F' || initial != 'K')
  {
    cout << "Error";
    return -1;
  }
  else
  {
    cout << "Enter your final value unit: C for Celsius, K for Kelvin, F for Fahrenheit" << endl;
    cin >> ending;
    if (ending == initial || ending != 'C' || ending != 'F' || ending != 'K')
    {
      cout << "Error";
      return -1;
    }
  }
  
  if (initial == 'C')
  {
    cout << "Enter your Celsius value: " << endl;
    cin >> celsius;
    if (ending == 'F')
    {
      // Convert C into F
    }
    else
    {
      // Convert C into K
    }
  }
  else if (initial == 'F')
  {
    cout << "Enter your Fahrenheit value: " << endl;
    cin >> fahrenheit;
    if (ending == 'C')
    {
      // Convert F into C
    }
    else
    {
      // Convert F into K
    }
  }
  else // initial == 'K'
  {
    if (ending == 'C')
    {
      // Convert K into C
    }
    else // ending == 'F'
    {
      // Convert K into F
    }
  }

  return 0;
}
