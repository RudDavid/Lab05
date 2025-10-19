/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        19.10.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>


using namespace std;

const int mIndex = 100, nIndex = 100;
// Находим количество отрицательных элементов в заданной матрице
double findNegativeElements(double arr[mIndex][nIndex], int rowCount, int columnCount) {
  int countOfNegativeElements = 0;
  int rowIndex;
  int columnIndex;

  for (rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
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
  int columnCount;
  // Строка
  int rowCount;
  int rowIndex;
  int columnIndex;
  int matrixCount;
  int borderOfMatrix;
  int countOfNegativeElements;

  borderOfMatrix = 2;

  cout << "Enter number of rows: ";
  cin >> rowCount;
  cout << "Enter number of column: ";
  cin >> columnCount;

  for (matrixCount = 1; matrixCount <= borderOfMatrix; ++matrixCount) {
    cout << "Enter number of rows: ";
    cin >> columnCount;
    cout << "Enter number of column: ";
    cin >> rowCount;
    cout << "Enter elements = " << endl;
    for (rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
      for (columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
        cin >> matrix[rowIndex][columnIndex];
      }

    }

    countOfNegativeElements = findNegativeElements(matrix, rowCount, columnCount);

    if (matrixCount < borderOfMatrix) {
      cout << "Count negative elements of matrix S: " << countOfNegativeElements << endl;
    }
    if (matrixCount == borderOfMatrix) {
      cout << "Count negative elements of matrix W: " << countOfNegativeElements << endl;
    }
    countOfNegativeElements = 0.0;

  }

  return 0;

}
