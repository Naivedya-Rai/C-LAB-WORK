#include <stdio.h>
 
void add_mat(int row, int col, int mat1[row][col], int mat2[row][col]);
void sub_mat(int row, int col, int mat1[row][col], int mat2[row][col]);
void trans_mat(int row,int col, int mat[row][col]);
void print_mat(int row, int col, int mat[row][col]);
 
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
  
  printf("Addition of Matrix one and two:\n");
  add_mat(row, col, mat1, mat2);
 
  printf("Subtraction of Matrix one and two:\n");
  sub_mat(row, col, mat1, mat2);
 
  printf("Transpose of Matrix 1:\n");
  trans_mat(row, col, mat1);
 
 
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
 
void add_mat(int row, int col, int mat1[row][col], int mat2[row][col]) {
 
  int res[row][col];
 
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      res[i][j] = mat1[i][j] + mat2[i][j]; 
    } 
  }
 
  print_mat(row, col, res);
 
}
 
void sub_mat(int row, int col, int mat1[row][col], int mat2[row][col])
{
 
  int res[row][col];
 
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      res[i][j] = mat1[i][j] - mat2[i][j]; 
    } 
  }
 
  print_mat(row, col, res);
 
}
 
void trans_mat(int row,int col, int mat[row][col]) {
 
  // Top
  for(int top = 0; top < row; top++)
    printf("+-----");
 
  printf("+\n");
 
  for(int i = 0; i < col; i++) {
    for(int j = 0; j < row; j++) {
      printf("|%5d",mat[j][i]);
    } 
    printf("|\n");
 
    if(i != col - 1) {
      for(int top = 0; top < row; top++)
        printf("+-----");
      printf("+\n");
    }
 
  }
 
  // bottom
  for(int top = 0; top < row; top++)
    printf("+-----");
 
  printf("+\n");
  
}

