#include <iostream>
#include <cstdlib>

#define ROW 5
#define COL 3

using namespace std;



int main()
{
  int sales[ROW][COL];

  cout << "Enter sales for 3 items; for 5 salesmans." << endl;
  for (int i = 0; i < ROW; i++)
  {
    cout << "For Salesman " << i + 1 << ": " << endl;
    for (int j = 0; j < COL; j++)
    {
      cout << "Item number " << j + 1 << ": ";
      cin >> sales[i][j];
    }
  }

  cout << "Printing Results..." << endl;
  cout << "For each salesman and each item through a tableau." << endl;
  cout << "            || Product 1 || Product 2 || Product 3 || Total ||" << endl;
  
  int item1Sum = 0,
      item2Sum = 0,
      item3Sum = 0;

  for (int i = 0; i < ROW; i++)
  {
    int salesmanSum = 0;

    cout << " Salesman " << i + 1 << " ||";
    for (int j = 0; j < COL; j++)
    {
      cout << " " << sales[i][j] << " ||";
      salesmanSum += sales[i][j];
      if (j == 0)
      {
        item1Sum += sales[i][j];
      }
      else if (j == 1)
      {
        item2Sum += sales[i][j];
      }
      else
      {
        item3Sum += sales[i][j];
      }
    }
    cout << " " << salesmanSum << " ||" << endl;
  }
  int totalSum = 0;

  totalSum += item1Sum + item2Sum + item3Sum;
  cout << "Total     || " << item1Sum << " || " 
    << item2Sum << " || " << item3Sum << " || "
    << totalSum << " || " << endl;

  int sum = 0;
  for (int i = 0; i < ROW; i++)
    for(int j = 0; j < COL; j++)
      sum += sales[i][j];
  cout << "Total sales : " << sum << "€" << endl;

  return 0;
}
