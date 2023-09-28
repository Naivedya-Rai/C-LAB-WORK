#include <stdio.h> 

  

int main(void) { 

  

  int arr[] = {3,2,1,4,5,6,7,8,9}; 

  

  int len = sizeof(arr)/sizeof(int); 

  

  printf("Before Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  int i, j, min, temp = 0; 

  

  for(i = 0; i < (len-1); i++) { 

    min = i; 

  

    for(j = i+1; j < len; j++) { 

      if(arr[j] < arr[min]){ 

        min = j; 

      } 

    } 

  

    if(min != i) { 

      temp = arr[min]; 

      arr[min] = arr[i]; 

      arr[i] = temp; 

    } 

  } 

  

  printf("After Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  return 0; 

} 