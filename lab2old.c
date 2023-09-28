#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void mat_out(int ar[][10],int);
void menu();
void sum(int ar1[][10],int ar2[][10],int);
void sub(int ar1[][10],int ar2[][10],int);
void mul(int ar1[][10],int ar2[][10],int);
void greatest(int ar1[][10],int);
void add_dia(int ar1[][10],int);
void sparse(int ar1[][10],int);
void ads(int ar1[][10],int ar2[][10],int);
void spt(int ar1[][10],int);


int main()
{ 
	int arr1[10][10],arr2[10][10],i,j,n;
	printf("Enter the number for rows=cols\n");
	scanf("%d",&n);
	printf("Enter the elements for 1st matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element[%d][%d]:",i,j);scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the elements for 2nd matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element[%d][%d]:",i,j);scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("Matrix 1\n");
	mat_out(arr1,n);
	printf("Matrix 2\n");
	mat_out(arr2,n);
	
	menu();
	int choice;
	printf("\nEnter your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: sum(arr1,arr2,n);
		break;
		case 2: sub(arr1,arr2,n);
		break;
		case 3: mul(arr1,arr2,n);
		break;
		case 4: greatest(arr1,n);
		greatest(arr2,n);
		break;
		case 5: add_dia(arr1,n);
		break;
		case 6: sparse(arr1,n);
		sparse(arr2,n);
		break;
		case 7: ads(arr1,arr2,n);
		break;
		case 8: spt(arr1,n);
		spt(arr2,n);
		break;
		default: printf("\nNot valid option\n");
		break;
	}
	
	return 0;
}

void menu()
{
	printf("\n\nMenu\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Find Greatest Number from each row\n");
	printf("5.Addition of Major Diagonal Elements\n6.Sparse Matrix representation of given matrix\n");
	printf("7.Addition of 2 sparse matrix\n8.Transpose of sparse matrix\n");
}

void mat_out(int ar[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",ar[i][j]);
		}
		printf("\n");
	}
}

void sum(int ar1[][10],int ar2[][10],int n)
{
	int sum[10][10],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
	mat_out(sum,n);
}

void sub(int ar1[][10],int ar2[][10],int n)
{
	int sub[10][10],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sub[i][j]=ar1[i][j]-ar2[i][j];
		}
	}
	mat_out(sub,n);
}

void mul(int ar1[][10],int ar2[][10],int n)
{
	int mul[10][10]={0},i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				mul[i][j]+=ar1[i][k]*ar2[k][j];
			}
		}
	}
	mat_out(mul,n);
}

void greatest(int ar1[][10],int n)
{
	int i=0,j;
	int max=0;
	int result[10];
	while(i<n)
	{
		for(j=0;j<n;j++)
		{
			if(ar1[i][j]>max)
			{
				max = ar1[i][j];
			}
		}
		result[i]=max;
		max=0;
		i++;
	}
	printf("\nThe greatest numbers in each row\n");
	int x;
	for(x=0;x<i;x++)
	{
		printf("%d\n",result[x]);
	}
}

void add_dia(int ar1[][10],int n)
{
	int i,j,sum=0;
	printf("\nUSING MATRIX-1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum+=ar1[i][j];
			}
		}
	}
	printf("Sum of diagonal elements is %d.",sum);
}

void sparse(int ar1[][10],int n)
{
	int i,j,k=1,x;
	int sp[MAX][3];
	sp[0][0]=n;
	sp[0][1]=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar1[i][j]!=0)
			{
				sp[k][0]=i;
				sp[k][1]=j;
				sp[k][2]=ar1[i][j];
				k++;
			}
		}
		sp[0][2]=k-1;
	}
	
	int col = sp[0][2];
	printf("sparse\n");
	for(x=0;x<=col;x++)
	{
		printf("%3d%3d%3d\n",sp[x][0],sp[x][1],sp[x][2]);
	}
}

void ads(int ar1[][10], int ar2[][10], int n)
{
	int i,j,k=1,l=1;
	int sp1[MAX][3],sp2[MAX][3],sp3[MAX][3];
	sp1[0][0]=n; sp1[0][1]=n;
	sp2[0][0]=n; sp2[0][1]=n;
	sp3[0][0]=n; sp3[0][1]=n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar1[i][j]!=0)
			{
				sp1[k][0]=i; sp1[k][1]=j; sp1[k][2]=ar1[i][j];
				k++;
			}
		}
		sp1[0][2]=k-1;
	}
	int col1 = sp1[0][2];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar2[i][j]!=0)
			{
				sp2[l][0]=i; sp2[l][1]=j; sp2[l][2]=ar2[i][j];
				l++;
			}
		}
		sp2[0][2]=l-1;
	}
	
	int x=0,y=0,z=0;
	
	while(x<k && y<l)
	{
		if(sp1[x][0]<sp2[y][0])
		{
			sp3[z][0]=sp1[x][0];
			sp3[z][1]=sp1[x][1];
			sp3[z][2]=sp1[x][2];
			z++;
			x++;
		}
		else if(sp2[y][0]<sp1[x][0])
		{
			sp3[z][0]=sp2[y][0];
			sp3[z][1]=sp2[y][1];
			sp3[z][2]=sp2[y][2];
			z++;
			y++;
		}
		else if(sp1[x][1]<sp2[y][1])
		{
			sp3[z][0]=sp1[x][0];
			sp3[z][1]=sp1[x][1];
			sp3[z][2]=sp1[x][2];
			z++;
			x++;
		}
		else if(sp2[y][1]<sp1[x][1])
		{
			sp3[z][0]=sp2[y][0];
			sp3[z][1]=sp2[y][1];
			sp3[z][2]=sp2[y][2];
			z++;
			y++;
		}
		else
		{
			sp3[z][0]=sp1[x][0];
			sp3[z][1]=sp1[x][1];
			sp3[z][2]=sp1[x][2]+sp2[y][2];
			z++;
			x++;
			y++;
		}
	}
	
	while (x<k)
	{
		sp3[z][0]=sp1[x][0];
		sp3[z][1]=sp1[x][1];
		sp3[z][2]=sp1[x][2];
		x++;
		z++;
	}
	
	while (y<l)
	{
		sp3[z][0]=sp2[y][0];
		sp3[z][1]=sp2[y][1];
		sp3[z][2]=sp2[y][2];
		y++;
		z++;
	}
	
	sp3[0][2]=z-1;
	int col3;
	col3 = sp3[0][2];
	
	int a;
	for(a=0;a<=col3;a++)
	{
		printf("%3d%3d%3d\n",sp3[a][0],sp3[a][1],sp3[a][2]);
	}
}


void spt(int ar1[][10],int n)
{
	int i,j,k=1,x;
	int sp[MAX][3];
	sp[0][0]=n;
	sp[0][1]=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar1[i][j]!=0)
			{
				sp[k][0]=i;
				sp[k][1]=j;
				sp[k][2]=ar1[i][j];
				k++;
			}
		}
		sp[0][2]=k-1;
	}
	
	int col = k;
	printf("sparse\n");
	for(x=0;x<col;x++)
	{
		printf("%3d%3d%3d\n",sp[x][0],sp[x][1],sp[x][2]);
	}
	
	//transpose
	int temp = 0;
	for(i=0;i<k;i++)
	{
		temp = sp[i][0];
		sp[i][0]=sp[i][1];
		sp[i][1]=temp;
	}
	
	printf("tranposed sparse\n");
	for(x=0;x<col;x++)
	{
		printf("%3d%3d%3d\n",sp[x][0],sp[x][1],sp[x][2]);
	}
}