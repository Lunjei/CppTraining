#include <iostream>

using namespace std;

template <typename T> T largestOfThree(T a, T b, T c)
{
  return ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}

int main()
{
  cout << "Parmi les 3 nombres | Le plus petit est" << endl;
  cout << "      3, 4, 5       |         " << largestOfThree<int>(3, 4, 5) << endl;
  cout << "      4, 6, 3       |         " << largestOfThree<int>(4, 6, 4) << endl;
  cout << "      0, 0, 0       |         " << largestOfThree<int>(0, 0, 0) << endl;
  cout << "     1.2, 1.3, 1.4  |         " << largestOfThree<double>(1.2,1.3,1.4) << endl;
  cout << "     3.14,3.10,2.99 |         " << largestOfThree<double>(3.14,3.10,2.99) << endl;
  cout << "     1/2, 2/4, 3/5  |         " << largestOfThree<double>((double)1/2, (double)2/4, (double)3/5) << endl;
  cout << "     1/2, 3/5, 4/5  |         " << largestOfThree<double>((double)1/2, (double)3/5, (double)4/5) << endl;
  cout << "       a, b, c      |         " << largestOfThree<char>('a', 'b', 'c') << endl;

  return 0;
}
