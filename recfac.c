#include <stdio.h> 

  

int main(void) { 

  

  int arr[] = {3,2,1,4,5,6,7,8,9}; 

  

  int len = sizeof(arr)/sizeof(int); 

  

  printf("Before Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  for(int i = 0; i < len-1; i++) { 

    for(int j = i+1; j < len-1 && j > 0; j--) { 

      if(arr[j-1] > arr[j]) { 

        int temp = arr[j-1]; 

        arr[j-1] = arr[j]; 

        arr[j] = temp; 

      } 

    } 

  } 

  

  printf("After Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  return 0; 

} 
