#include <stdio.h>
#define MAX 100

int mat1[MAX][MAX];
int mat2[MAX][MAX];
int resmat[MAX][MAX];
int choice;
int mat1row,mat1col;
int mat2row,mat2col;
int i,j,k;

void matrix1(int mat1[MAX][MAX]);
void matrix2(int mat2[MAX][MAX]);
void add_mat(int mat1[MAX][MAX],int mat2[MAX][MAX],int resmat[MAX][MAX]);
void sub_mat(int mat1[MAX][MAX],int mat2[MAX][MAX],int resmat[MAX][MAX]);
void mult_mat(int mat1[MAX][MAX], int mat2[MAX][MAX], int resmat[MAX][MAX]);
void great_mat(int row, int col, int mat[MAX][MAX]);
void add_diag(int row, int col, int mat[MAX][MAX]);
void sparse_mat(int row, int col, int mat[MAX][MAX]);


int main (void)
{
	//reading and displaying both matrices
	matrix1(mat1);
	printf("\n\n");
	matrix2(mat2);
	printf("\n\n");
	
	puts("MENU");
	puts("1.Addition of two Matrices");
	puts("2.Subtraction of two Matrices");
	puts("3.Multiplication of two Matrices");
	puts("4.Greatest number in each row");
	puts("5.Addition of major diagonal elements");
	puts("6.Sparse Matrix representation for a given matrix");
	
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			printf("\n\nAddition of two Matrices:\n\n");
			add_mat(mat1,mat2,resmat);
			break;
		case 2: 
			printf("\n\nSubtraction of two Matrices:\n\n");
			sub_mat(mat1,mat2,resmat);
			break;
		case 3:
			printf("\n\nMultiplication of two Matrices:\n\n");
			mult_mat(mat1,mat2,resmat);
			break;
		case 4: 
			printf("\n\nGreatest number in each row:\n\n");
			printf("\nMatrix 1: \n");
			great_mat(mat1row,mat1col,mat1);
			printf("\nMatrix 2: \n");
			great_mat(mat2row,mat2col,mat2);
			break;
		case 5: 
			printf("\n\nAddition of major diagonal elements:\n\n");
			printf("\nMatrix 1: \n");
			add_diag(mat1row,mat1col,mat1);
			printf("\nMatrix 2: \n");
			add_diag(mat2row,mat2col,mat2);
			break;
		case 6: 
			printf("\n\nSparse matrix representation: \n\n");
			sparse_mat(mat1row,mat1col,mat1);
			break;
		default:
			printf("Please enter your choice between 1-7!");
			break;
	}
}



void matrix1(int mat1[MAX][MAX])
{
	printf("Enter the number of rows for matrix 1: ");
	scanf("%d",&mat1row);
	printf("Enter the number of columns for matrix 1: ");
	scanf("%d",&mat1col);
	
	for (i=0;i<mat1row;i++)
	{
		for (j=0;j<mat1col;j++)
		{
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	
	for (i=0;i<mat1row;i++)
	{
		printf("\n");
		for (j=0;j<mat1col;j++)
		{
			printf(" %d ",mat1[i][j]);
		}
	}
}

void matrix2(int mat2[MAX][MAX])
{
	printf("Enter the number of rows for matrix 2: ");
	scanf("%d",&mat2row);
	printf("Enter the number of columns for matrix 2: ");
	scanf("%d",&mat2col);
	
	for (i=0;i<mat2row;i++)
	{
		for (j=0;j<mat2col;j++)
		{
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for (i=0;i<mat2row;i++)
	{
		printf("\n");
		for (j=0;j<mat2col;j++)
		{
			printf(" %d ",mat2[i][j]);
		}
	}
}

void add_mat(int mat1[MAX][MAX],int mat2[MAX][MAX],int resmat[MAX][MAX])
{
	if (mat1row==mat2row && mat1col==mat2col)
	{
		//adding both matrices
		for (int i=0;i<mat1row;i++)
		{
			for (int j=0;j<mat1col;j++)
			{
				resmat[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		//printing result
		for (int i=0;i<mat1row;i++)
		{
			printf("\n");
			for (int j=0;j<mat1col;j++)
			{
				printf(" %d ",resmat[i][j]);
			}
		}
	}
	else
	{
		printf("Operation not possible since both matrices have a different order!");
	}
}

void sub_mat(int mat1[MAX][MAX],int mat2[MAX][MAX],int resmat[MAX][MAX])
{
	if (mat1row==mat2row && mat1col==mat2col)
	{
		//subtracting both matrices
		for (int i=0;i<mat1row;i++)
		{
			for (int j=0;j<mat1col;j++)
			{
				resmat[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
		//printing result
		for (int i=0;i<mat1row;i++)
		{
			printf("\n");
			for (int j=0;j<mat1col;j++)
			{
				printf(" %d ",resmat[i][j]);
			}
		}
	}
	else
	{
		printf("Operation not possible since both matrices have a different order!");
	}
}

void mult_mat(int mat1[MAX][MAX], int mat2[MAX][MAX], int resmat[MAX][MAX])
{
	int temp;
	if (mat1col==mat2row)
	{
		//multiplying both matrices
		for (int i=0;i<mat1row;i++)
		{
			for (int j=0;j<mat2col;j++)
			{
				for (int k=0;k<mat2row;k++)
				{
					temp+=mat1[i][k]*mat2[k][j];
				}
				resmat[i][j]=temp;
				printf(" %d ",resmat[i][j]);
				temp=0;
			}
			printf("\n");
		}
	}
	else
	{
		printf("Operation not possible since the number of columns of the first matrix is not equal to the rows of the second matrix!");
	}
}

void great_mat(int row, int col, int mat[MAX][MAX])
{
	int temp=-32768;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (mat[i][j]>temp)
			{
				temp=mat[i][j];
			}
		}
		printf(" %d \n",temp);
		temp=0;
	}
}

void add_diag(int row, int col, int mat[MAX][MAX])
{
	int temp=0;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (j==i)
			{
				temp+=mat[i][j];
			}
		}
	}
	printf(" %d ",temp);
}

void sparse_mat(int row, int col, int mat[MAX][MAX])
{
	int count=0;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (mat[i][j]==0)
			{
				count++;
			}
		}
	}
	
	int valuearr[MAX];
	int rowarr[MAX];
	int colarr[MAX];
	
	k=0;
	if (count>=(row*col)/2)
	{
		for (i=0;i<row;i++)
		{
			for (j=0;j<col;j++)
			{
				if (mat[i][j]!=0)
				{
					valuearr[k]=mat[i][j];
					rowarr[k]=i;
					colarr[k]=j;
					k++;
				}
			}
		}
	}
	printf("Row Column Value\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d	%d   %d\n",rowarr[j]+1,colarr[j]+1,valuearr[j]);
		}
	}
}