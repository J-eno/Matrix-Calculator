#include "Calc.h"
#include "Matrix.h"

int main(){
  
  int rows;
  int cols;
  
  cout << "How many rows does your matrix have: ";
  cin >> rows;
  cout << "How many columns does your matrix have: ";
  cin >> cols;

  Matrix matrix(rows, cols);

  return 0;
}
