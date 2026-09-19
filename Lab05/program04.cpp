#include <iostream>

using namespace std;

int sumSeries(int n)
{
  int sum = 0;

  for (int i = 0; i < n + 1; i++)
  {
    sum += i;
  }
  return sum;
}

int main()
{
  cout << "Sum from 1 to 100: " << sumSeries(100) << endl;
  
  return 0;
}
