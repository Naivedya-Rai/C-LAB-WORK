#include <stdio.h> 

#include <stdlib.h> 

  

#define MAX 20 

  

int main(void) { 

  

    int n,i,size; 

  

    printf("Enter the size of array [Max: 20]: "); 

    scanf("%d",&size); 

    if (size > MAX) { size = MAX; } 

  

    int arr[size]; 

    for (int i = 0; i < size; i++) { 

     

        printf("Enter Digit for index %d: ",i+1); 

        scanf("%d",&arr[i]); 

  

    } 

  

  

    printf("\n\nEnter the number to find: "); 

    scanf("%d",&n); 

  

    for (i = 0; i<size; i++) { 

  

        if (n == arr[i]) { 

            printf("%d is found at index: %d\n",n,i+1); 

            return 0; 

        } 

  

    } 

  

    printf("%d is not found in the array\n",n); 

    return 1; 

  

} 