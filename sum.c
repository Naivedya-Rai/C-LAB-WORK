#include <stdio.h> 

  

int sum_digits(int n) { 

  

    int sum = 0; 

  

    while (n!=0) { 

        sum += n%10; 

        n /= 10; 

    } 

  

    return sum; 

} 

  

int main(void) { 

  

    int n; 

    printf("Enter a number: "); 

    scanf("%d",&n); 

  

    printf("The sum of digits in the given nubmer %d: %d\n",n,sum_digits(n)); 

  

    return 0; 

  

} 