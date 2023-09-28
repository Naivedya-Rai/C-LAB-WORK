#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
  int len;
  printf("Enter Total Number of Elements: ");
  scanf("%d", &len);
 
  int* arr1 = (int *) malloc(len * sizeof(int));
  int* arr2 = (int *) malloc(len * sizeof(int));
  int* res= (int *) malloc(len * sizeof(int));
 
  printf("Enter Numbers for array1:\n");
  for(int i = 0; i < len; i++) {
    printf("%d: ",i+1);
    scanf("%d", &arr1[i]);
  }
 
  printf("Enter Numbers for array2:\n");
  for(int i = 0; i < len; i++) {
    printf("%d: ",i+1);
    scanf("%d", &arr2[i]);
  }
 
 
  printf("Sum of arrays\n");
 
  for(int i = 0; i < len; i++) {
    res[i] = arr1[i]+arr2[i];
    printf("%d ",res[i]);
  }
 
  printf("\n");
  return 0;
} 

