#include <stdio.h>
 
void print_mat(int row, int col, int mat[row][col]);
void mul_mat(int *mat1, int row1, int col1, int *mat2, int row2, int col2);
 
int main(void) {
 
  int row, col;
 
  printf("Enter no. of Rows: ");
  scanf("%d", &row);
 
  printf("Enter no. of columns: ");
  scanf("%d", &col);
 
  int mat1[row][col];
  int mat2[row][col];
 
  printf("\nEnter values for matrix one\n");
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      printf("value (%d,%d): ",i,j);
      scanf("%d", &mat1[i][j]); 
    } 
  }
 
  printf("\nEnter values for matrix two\n");
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      printf("value (%d,%d): ",i,j);
      scanf("%d", &mat2[i][j]); 
    } 
  }
  
  mul_mat(mat1, row, col,mat2,row,col);
 
  return 0;
 
}
 
 
void print_mat(int row, int col, int mat[row][col]) {
 
  // Top
  for(int top = 0; top < col; top++)
    printf("+-----");
 
  printf("+\n");
 
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      printf("|%5d",mat[i][j]);
    } 
    printf("|\n");
 
    if(i != row - 1) {
      for(int top = 0; top < col; top++)
        printf("+-----");
      printf("+\n");
    }
 
  }
 
  // bottom
  for(int top = 0; top < col; top++)
    printf("+-----");
 
  printf("+\n");
  
}
 
void mul_mat(int *mat1, int row1, int col1, int *mat2, int row2, int col2) {
 
  int res[row1][col2];
 
  for(int i = 0; i < row1; i++) {
    for(int j = 0; j < col2; j++) {
      res[i][j] = 0; 
    } 
  }
 
  for(int i = 0; i < row1; i++) {
    for(int j = 0; j < col2; j++) {
      for(int k = 0; k < col2; k++) {
        //int a = mat1[i][k];
        int a = *(mat1+(i*row1)+k);
        //int b = mat2[k][j];
        int b = *(mat2+(k*row2)+j);
        res[i][j] += a * b;
      } 
    } 
  }
 
  print_mat(row1, col2, res);
}
