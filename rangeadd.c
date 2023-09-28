#include <stdio.h>
 
int main() {
 
  int start = 0;
  int end;
  int sum = 0;
 
  printf("Enter the starting number: ");
  scanf("%d",&start);
 
  printf("Enter the ending number: ");
  scanf("%d",&end);
 
  if (end-start < 1) {
    printf("Enter a vaild range\n");
    return 0;
  }
 
  for (int i = start; i<end; i++) {
    sum += i;
  }
 
  printf("The sum of range of numbers from %d to %d: %d\n",start,end,sum);
 
  return 0;
 
}
