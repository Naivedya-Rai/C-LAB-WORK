#include <stdio.h> 

#include <stdlib.h> 

  

typedef struct { 

  char* id; 

  char* name; 

  char* desg; 

  char* dept; 

  float basic, net; 

} emp; 

  

int main(void) { 

  

  emp* p = (emp *) malloc(sizeof(emp)); 

  

  p->id = (char *) malloc(10*sizeof(char)); 

  p->name = (char *) malloc(40*sizeof(char)); 

  p->desg = (char *) malloc(20*sizeof(char)); 

  p->dept = (char *) malloc(20*sizeof(char)); 

  

  printf("Enter ID: "); 

  scanf("%s", p->id); 

  

  printf("Enter Name: "); 

  scanf("%s", p->name); 

  

  printf("Enter Designation: "); 

  scanf("%s", p->desg); 

  

  printf("Enter department: "); 

  scanf("%s", p->dept); 

  

  printf("Enter Basic Salary: "); 

  scanf("%f", &(p->basic)); 

  

  p->net = p->basic * 0.75; 

  

  printf("\n\nPay Check\n"); 

  

  printf("ID: %s\tDEPT: %s\tDESG: %s\n",p->id, p->dept, p->desg); 

  printf("Name: %s\n", p->name); 

  printf("Basic Pay: %6.2f\tNet Pay: %6.2f\n", p->basic, p->net); 

  printf("\n"); 

  

  

  

} 