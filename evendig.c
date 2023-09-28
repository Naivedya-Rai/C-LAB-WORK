#include <stdio.h> 

  

int count_even(int n); 

  

int main(void) { 

  

    int n; 

    printf("Enter a number: "); 

    scanf("%d",&n); 

  

    printf("The number of even digits in %d: %d\n",n,count_even(n)); 

     

    return 0; 

} 

  

int count_even(int n) { 

  

    int count = 0; 

  

    while(n!=0) { 

         

        int dig = n%10; 

        if ( dig%2 == 0 ) count ++; 

  

        n /= 10; 

  

    } 

     

    return count; 

} 