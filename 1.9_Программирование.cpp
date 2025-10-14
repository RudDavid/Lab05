/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        13.10.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>


using namespace std;

const int mIndex = 100, nIndex = 100;
// Находим количество отрицательных элементов в заданной матрице
double findNegativeElements(double arr[mIndex][nIndex], int row, int column) {
  double countOfNegativeElements = 0;
  int rowIndex;
  int columnIndex;

  for (rowIndex = 0; rowIndex < row; ++rowIndex) {
    for (columnIndex = 0; columnIndex < column; ++columnIndex) {
      if (arr[rowIndex][columnIndex] < 0) {
        ++countOfNegativeElements;
      }
    }
  }
  return countOfNegativeElements;
}


int main() {
  double matrix[mIndex][nIndex];
  // Столбец
  int column;
  // Строка
  int row;
  int rowIndex;
  int columnIndex;
  double numberOfMatrices;
  double borderOfMatrix;
  double countOfNegativeElements;


  borderOfMatrix = 2.0;

  cout << "Enter number of rows: ";
  cin >> row;
  cout << "Enter number of column: ";
  cin >> column;

  for (numberOfMatrices = 1.0; numberOfMatrices <= borderOfMatrix; ++numberOfMatrices) {
    cout << "Enter number of rows: ";
    cin >> column;
    cout << "Enter number of column: ";
    cin >> row;
    cout << "Enter elements = " << endl;
    for (rowIndex = 0; rowIndex < row; ++rowIndex) {
      for (columnIndex = 0; columnIndex < column; ++columnIndex) {
        cin >> matrix[rowIndex][columnIndex];
      }

    }

    countOfNegativeElements = findNegativeElements(matrix, row, column);

    if (numberOfMatrices < borderOfMatrix) {
      cout << "Count negative elements of matrix S: " << countOfNegativeElements << endl;
    }
    if (numberOfMatrices == borderOfMatrix) {
      cout << "Count negative elements of matrix W: " << countOfNegativeElements << endl;
    }
    countOfNegativeElements = 0.0;

  }

  return 0;
}