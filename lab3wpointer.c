//Naivedya Rai CSB1
//20070122083

//with pointers
#include <stdio.h>
#define MAX 50

struct student{
	char name[MAX];
	int prn;
	float percent;
};

int choice;
int count;

int main (void)
{
	struct student s[MAX];
	count=0;
	int exit;
	do{
		puts("______________STUDENT DATABASE_____________");
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
				create(s);
				break;
			case 2:
				insert(s);
				break;
			case 3:
				modify(s);
				break;
			case 4:
				del(s);
				break;
			case 5:
				display(s);
				break;
			default:
				puts("That's an Invalid request! Please enter a number between 1-5.");
		}
		printf("\n\n\nEXIT(0/1): ");
		scanf("%d",&exit);
		printf("\n\n");
	}while (exit!=1);
}

void create(struct student *a)
{
	int num;
	printf("Enter the number of records: ");
	scanf("%d",&num);
	
	for (int i=0;i<num;i++)
	{
		printf("\nEnter the name of the student: ");
		scanf("%s",&a[i].name);
		printf("\nEnter the PRN of the student: ");
		scanf("%d",&a[i].prn);
		printf("\nEnter the percentage of the student: ");
		scanf("%f",&a[i].percent);
		
		printf("\n\n");
		count++;
	}
}

void display(struct student *a)
{
	printf("\n\nNAME\tPRN\tPERCENTAGE");
	for (int i=0;i<count;i++)
	{
		printf("\n");
		printf("%s\t%d\t%.3f",a[i].name,a[i].prn,a[i].percent);
	}
}

void insert(struct student *a)
{
	int num;
	printf("Enter the number of records: ");
	scanf("%d",&num);
	
	for (int i=0;i<num;i++)
	{
		printf("\nEnter the name of the student: ");
		scanf("%s",&a[count].name);
		printf("\nEnter the PRN of the student: ");
		scanf("%d",&a[count].prn);
		printf("\nEnter the percentage of the student: ");
		scanf("%f",&a[count].percent);

		printf("\n\n");
		
		count++;
	}
}

void modify(struct student *a)
{
	int num;
	printf("Enter the PRN of the student whose record is to be modified: ");
	scanf("%d",&num);
	
	for (int i=0;i<count;i++)
	{
		if (a[i].prn==num)
		{
			printf("\nEnter the name of the student: ");
			scanf("%s",&a[i].name);
			printf("\nEnter the PRN of the student: ");
			scanf("%d",&a[i].prn);
			printf("\nEnter the percentage of the student: ");
			scanf("%f",&a[i].percent);
		}
	}
}

void del(struct student *a)
{
	int num;
	printf("Enter the PRN of the student whose record is to be deleted: ");
	scanf("%d",&num);
	
	for (int i=0;i<count;i++)
	{
		if (a[i].prn==num)
		{
			while (i<count)
			{
				a[i]=a[i+1];
				i++;
			}
		}
	}
	count--;
}

