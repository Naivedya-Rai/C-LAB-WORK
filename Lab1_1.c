//Naivedya Rai CSB1
//20070122083

#include <stdio.h>

int n;
int ent_no(int a);
int sum_digits(int a);
int rev_digits(int a);
int trian_num(int a);

int main ()
{
	printf("MENU\n\n");
	printf("1.Sum of digits of a number\n");
	printf("2.Reverse the digits of a number\n");
	printf("3.Average of 'n' numbers inputted by the user\n");
	printf("4.Generate a table of triangular number for n numbers\n");
	printf("5.Print number in words\n");
	int x;
	printf("\n\nEnter your choice: ");
	scanf("%d",&x);
	
	switch (x){
		case 1:
			printf("\n\nSum of digits of a number:\n\n");
			sum_digits(ent_no(n));
			break;
		case 2:
			printf("\n\nReverse the digits of a number:\n\n");
			rev_digits(ent_no(n));
			break;
		case 3: 
		{
			printf("\n\nAverage of 'n' numbers inputted by the user:\n\n");
			int num=ent_no(n);
			int arr[num];
			for (int i=0;i<num;i++)
			{
				printf("Enter the value at [%d]: ",i);
				scanf("%d",&arr[i]);
			}
			
			int sum=0;
			for (int j=0;j<num;j++)
			{
				sum+=arr[j];
			}
			int res=sum/num;
			
			printf("The average of given %d numbers is %d",num,res);
			break;	
		} 
		case 4:
			printf("\n\nGenerate a table of triangular numbers for n numbers:\n\n");
			trian_num(ent_no(n));
			break;
		case 5:
			printf("\n\nPrint number in words: \n\n");
			num_word(ent_no(n));
			break;
		default:
			printf("\nPlease enter your choice between 1-5!\n\n");
	}	
	
			
}

int ent_no(int a)
{
	printf("Enter a number: ");
	scanf("%d",&a);
	return a;
}

int sum_digits(int a)
{
	int sum=0;
	while (a>0)
	{
		int rem=a%10;
		a/=10;
		sum+=rem;
	}
	printf("\nThe sum of the digits is %d",sum);
}

int rev_digits(int a)
{
	while (a>0)
	{
		int rem=a%10;
		printf("%d",rem);
		a/=10;
	}
}

int trian_num(int a)
{
	for (int i=0;i<a;i++)
	{
		printf(" %d ",i*(i+1)/2);
	}
}

int num_word(int a)
{
	int rev=0,rem;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10 + rem;
		a/=10;
	}
	
	while (rev>0)
	{
		int digit=rev%10;
		switch(digit){
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8: 
				printf("Eight ");
				break;
			case 9: 
				printf("Nine ");
				break;
		}
		rev/=10;
	}
}

