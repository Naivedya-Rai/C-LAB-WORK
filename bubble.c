#include <stdio.h> 

  

int main(void) { 

  

  int arr[] = {3,2,1,4,5,6,7,8,9}; 

  

  int len = sizeof(arr)/sizeof(int); 

  

  printf("Before Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  int swapped = 0;   

  

  do{ 

    swapped = 0; 

  

    for(int i = 1; i < len-1; i++) { 

      if(arr[i-1] > arr[i]) { 

        int temp = arr[i-1]; 

        arr[i-1] = arr[i]; 

        arr[i] = temp; 

        swapped = 1; 

      } 

    } 

  }while(swapped); 

  

  printf("After Sorting: \n"); 

  for(int i = 0; i < len; i++) 

    printf("%d ", arr[i]); 

  printf("\n"); 

  

  return 0; 

} 

  