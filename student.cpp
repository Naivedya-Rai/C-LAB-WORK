//Naivedya Rai
//20070122083-CSB1
#include <stdio.h>
#define MAX 100
struct student
{
char name[MAX];
int  prn;
char branch[MAX];
int  marks;
char city[MAX];
char state[MAX];
};
struct student s[5];
void creation();
void display_database();
int main (void)
{
printf("___________________STUDENT DATABASE SYSTEM_________________\n\n");
creation();
}
void creation()
{
for (int k=0;k<5;k++)
{
printf("\n");
printf("Enter student's name: ");
scanf("%s",&s[k].name);
printf("Enter student's prn: ");
scanf("%d",&s[k].prn);
printf("Enter student's branch: ");
scanf("%s",&s[k].branch);
printf("Enter student's marks: ");
scanf("%d",&s[k].marks);
printf("Enter student's city: ");
scanf("%s",&s[k].city);
printf("Enter student's state: ");
scanf("%s",&s[k].state);
}
display_database();
}
void display_database()
{
printf("\nNAME\tPRN\tBRANCH\tMARKS\tADDRESS");
for(int k=0;k<5;k++)
{
printf("\n");
printf("%s\t\t%d\t%s\t%d\t%s %s",(s+k)->name,(s+k)->prn,(s+k)->branch,(s+k)->marks,(s+k)->city,(s+k)->state);
}
}