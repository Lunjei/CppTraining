#include <iostream>

using namespace std;

int fiboRec(int n)
{
  // Fibonacci Recursion.
  if (n == 0 || n == 1)
    return n;
  else if (n < 0)
  {
    cout << "Error, fibonacci series can't be negative." << endl;
    return -1;
  }
  else
    return fiboRec(n - 1) + fiboRec(n - 2);
}


int main()
{
  cout << fiboRec(-5) << endl;
  cout << fiboRec(-1) << endl;
  cout << fiboRec(0) << endl;
  cout << fiboRec(1) << endl;
  cout << fiboRec(5) << endl;
  cout << fiboRec(10) << endl;
  cout << fiboRec(15) << endl;
  cout << fiboRec(20) << endl;

  return 0;
}
