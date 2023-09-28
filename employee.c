#include <stdio.h>
 
typedef struct {
 
  char id[10];
  char name[60];
  char desg[30];
  char dept[20];
  float basic, net;
 
} emp;
 
int main(void) {
 
  emp one = {"100", "RandomName", "Head", "IT", 1000, 0};
 
  one.net = one.basic * 0.75;
 
  printf("Pay Check\n");
 
  printf("\n\n");
  printf("ID: %s\tDEPT: %s\tDESG: %s\n",one.id, one.dept, one.desg);
  printf("Name: %s\n", one.name);
  printf("Basic Pay: %6.2f\tNet Pay: %6.2f\n", one.basic, one.net);
  printf("\n");
 
 
  return 0;
 
}
