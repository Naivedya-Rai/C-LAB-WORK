//Naivedya Rai CSB1
//20070122083

//without pointers



#include <stdio.h>
#define MAX 60
struct student 
{
	char name[60];
	int prn;
	float percent;
};

struct student s[MAX];

int choice;
int count;

void create();
void insert();
void modify();
void del();
void display();


int main (void)
{
	count=0;
	int exit;
	do
	{
		puts("----------STUDENT DATABASE-----------");
		puts("1.Create");
		puts("2.Insert");
		puts("3.Modify");
		puts("4.Delete");
		puts("5.Display");
	
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
	
		switch (choice)
		{
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				modify();
				break;
			case 4:
				del();
				break;
			case 5:
			   	display();
				 break;
			default:
				puts("Invalid request! Please enter a number between 1-5.");
				break;
		}
		printf("\n\nEXIT(0/1): ");
		scanf("%d",&exit);
		printf("\n\n"); 
	}while (exit!=1);
}

void create()
{
	int num;
	printf("Enter the number of records: ");
	scanf("%d",&num);
	
	for (int i=0;i<num;i++)
	{
		printf("\nEnter the name of the student: ");
		scanf("%s",&s[i].name);
		printf("\nEnter the PRN of the student: ");
		scanf("%d",&s[i].prn);
		printf("\nEnter the percentage of the student: ");
		scanf("%f",&s[i].percent);
		
		count++;
	}
	display();
}

void insert()
{
	int rec;
	printf("Enter the number of records: ");
	scanf("%d",&rec);
	
	for (int i=0;i<rec;i++)
	{
		printf("\nEnter the name of the student: ");
		scanf("%s",&s[count].name);
		printf("\nEnter the PRN of the student: ");
		scanf("%d",&s[count].prn);
		printf("\nEnter the percentage of the student: ");
		scanf("%f",&s[count].percent);
		
		count++;
	}
	display();
}

void modify()
{
	int check;
	printf("Enter the PRN of the student whose record is to be modified: ");
	scanf("%d",&check);
	for (int i=0;i<count;i++)
	{
		if (s[i].prn==check)
		{
			printf("\nEnter the name of the student: ");
			scanf("%s",&s[i].name);
			printf("\nEnter the PRN of the student: ");
			scanf("%d",&s[i].prn);
			printf("\nEnter the percentage of the student: ");
			scanf("%f",&s[i].percent);
		}
	}
	display();	
}

void del()
{
	int check;
	printf("Enter the PRN of the student whose record is to be deleted: ");
	scanf("%d",&check);
	for (int i=0;i<count;i++)
	{
		if (s[i].prn==check)
		{
			while (i<count)
			{
				s[i]=s[i+1];
				i++;
			}
		}
	}
	count--;
	display();
}

void display()
{
	printf("NAME\t PRN\t  PERCENTAGE");
	for (int i=0;i<count;i++)
	{
		printf("\n");
		printf("%s\t%d\t%.4f",s[i].name,s[i].prn,s[i].percent);
	}
}
