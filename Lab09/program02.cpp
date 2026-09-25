#include <iostream>

using namespace std;

void display2DMatrix(int **matrix, int col, int row)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void read2DMatrix(int **matrix, int col, int row)
{
  cout << " enter " << col << " x " << row << "numbers." << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> matrix[i][j];
    }
  }
}

int main()
{

  return 0;
}
