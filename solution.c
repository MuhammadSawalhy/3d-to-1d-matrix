#include <stdio.h>

int main(int args_count, char **argv) {
  int n = 2, m = 2, p = 3;
  int matrix_3d[2][2][3] = {
      {
          {1, 2, 3},
          {4, 5, 6},
      },
      {
          {7, 8, 9},
          {10, 11, 12},
      },
  };

  // convert 3d matrix to 1d matrix, use the address of the first element
  int *matrix_1d = &matrix_3d[0][0][0];
  // indexes of the 3d matrix
  int i = 0, j = 1, k = 2;
  // equivalent index of the 1d matrix
  int y = i * m * p + j * p + k;

  // both lines should printf the same value
  printf("%d\n", matrix_1d[y]);
  printf("%d\n", matrix_3d[i][j][k]);
  return 0;
}
