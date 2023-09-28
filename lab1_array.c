#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int choice;
int size;

void insert_pos(int a[MAX]);
void insert_beg(int a[MAX]);
void insert_end(int a[MAX]);
void del_pos(int a[MAX]);
void del_ele(int a[MAX]);
void search_pos(int a[MAX]);
void search_ele(int a[MAX]);
void revert_arr(int a[MAX]);

int main (void)
{
	int con;
	int array[MAX];
	do
	{
		printf("Enter the size of the array: ");
		scanf("%d",&size);
		
		
		//user inputs
	
		for (int i=0;i<size;i++)
		{
			printf("Enter the element at index %d: ",i);
			scanf("%d",&array[i]);
		}
		
		printf("\n");
		//printing the array: 
	
			for (int i=0;i<size;i++)
		{
			printf(" %d ",array[i]);
		}
		
		printf("\n\nContinue with this array(0/1): ");
		scanf("%d",&con);
		printf("\n");
	}while(con!=1);

	do{
		printf("\n\n");
		puts("---------------MENU----------------");
		puts("1.Insertion at a position in the array");
		puts("2.Insertion at the beginning");
		puts("3.Insertion at the end");
		puts("4.Delete by position");
		puts("5.Delete by element");
		puts("6.Search by position");
		puts("7.Search by element");
		puts("8.Revert the array");
		puts("9.Print current array");
		
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf("\n\nInsertion at a position in the array: \n");
				insert_pos(array);
				break;
			case 2:
				printf("\n\nInsertion at the beginning: \n");
				insert_beg(array);
				break;
			case 3:
				printf("\n\nInsertion at the end: \n");
				insert_end(array);
				break;
			case 4:
				printf("\n\nDelete by position: \n");
				del_pos(array);
				break;
			case 5:
				printf("\n\nDelete by element: \n");
				del_ele(array);
				break;
			case 6:
				printf("\n\nSearch by position: \n");
				search_pos(array);
				break;
			case 7: 
				printf("\n\nSearch by element: \n");
				search_ele(array);
				break;
			case 8:
				printf("\n\nRevert the array: \n");
				revert_arr(array);
				break;
			case 9:
				printf("\n\nCurrent array: \n");
				curr_arr(array);
				break;
			default:
				printf("Invalid request! Enter a number between 1-9!");
				break;
		}
		int exit;
		printf("\n\nEXIT(0/1): ");
		scanf("%d",&exit);
	}while(exit!=1);
}

void insert_pos(int a[MAX])
{
	int pos;
	printf("Enter the index: ");
	scanf("%d",&pos);
	
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	
	for (int i=size-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	
	size+=1;
	for (int j=0;j<size;j++)
	{
		printf(" %d ",a[j]);
	}
}

void insert_beg(int a[MAX])
{
	int pos=0;
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	
	for (int i=size-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	
	size+=1;
	for (int j=0;j<size;j++)
	{
		printf(" %d ",a[j]);
	}
}

void insert_end(int a[MAX])
{
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	
	size+=1;
	a[size-1]=value;
	
	for (int j=0;j<size;j++)
	{
		printf(" %d ",a[j]);
	}
}

void del_pos(int a[MAX])
{
	int pos;
	printf("Enter the index: ");
	scanf("%d",&pos);
	
	for (int i=pos;i<size;i++)
	{
		a[i]=a[i+1];
	}
	size-=1;
	
	for (int j=0;j<size;j++)
	{
		printf(" %d ",a[j]);
	}
}

void del_ele(int a[MAX])
{
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	
	for (int i=0;i<size;i++)
	{
		if (ele==a[i])
		{
			while (i<size)
			{
				a[i]=a[i+1];
				i++;
			}
		}
	}
	size-=1;
	for (int j=0;j<size;j++)
	{
		printf(" %d ",a[j]);
	}
}

void search_pos(int a[MAX])
{
	int pos;
	printf("Enter the index: ");
	scanf("%d",&pos);
	
	for (int i=0;i<size;i++)
	{
		if(i==pos)
		{
			printf("Value at index %d = %d",pos,a[pos]);
		}
	}
}

void search_ele(int a[MAX])
{
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	
	for (int i=0;i<size;i++)
	{
		if (a[i]==ele)
		{
			printf("Index containing value %d = %d",ele,i);
		}
	}
}

void revert_arr(int a[MAX])
{
	for (int i=size-1;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
}

void curr_arr(int a[MAX])
{
	for (int i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
}
