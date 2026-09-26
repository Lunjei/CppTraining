#include <iostream>
#include <cstdlib>

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

void  sum2DMatrix(int **matrix1, int **matrix2, int **sum, int col, int row)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
}

void product2DMatrix(int **matrix1, int **matrix2, int **product, int colrow, int row1, int col2)
{
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      int sum = 0;
      for (int k = 0; k < colrow; k++)
      {
        sum += matrix1[i][k] * matrix2[k][j];
      }
      product[i][j] = sum;
    }
  }
}

void transpose2DMatrix(int **matrix, int **transpose, int col, int row)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
  }
}

int main()
{
  int col = 0,
      row = 0;

  cout << "Enter a colonne integer and a row integer: " << endl;
  cin >> col >> row;

  int **matrix = (int**)malloc(sizeof(int*) * row);
  for (int i = 0; i < row; i++)
  {
    matrix[i] = (int*)malloc(sizeof(int) * col);
  }
  read2DMatrix(matrix, col, row);
  display2DMatrix(matrix, col, row);

  int answer;
  do {
    cout << "Choisissez parmis les propoisitions suivantes : " << endl;
    cout << "1. Afficher la matrice en cours." << endl;
    cout << "2. Entrer une nouvelle matrice." << endl;
    cout << "3. Additionner la matrice avec elle même." << endl;
    cout << "4. Transposer la matrice" << endl;
    cout << "5. Multiplier la matrice par sa transposée." << endl;
    cin >> answer;
    if (answer < 1 || answer > 5)
      answer = -1;
  } while (answer == -1);

  free(matrix);

  return 0;
}
