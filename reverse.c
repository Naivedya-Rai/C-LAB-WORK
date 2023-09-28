#include <stdio.h> 

#include <math.h> 

  

int rev(int n); 

  

int main(void) { 

  

    int n; 

    printf("Enter a number: "); 

    scanf("%d",&n); 

  

    int r = rev(n); 

  

    printf("The Reverse of %d: %d\n",n, r); 

  

    return 0; 

  

} 

  

  

int rev(int n) { 

  

    int rev = 0; 

    int num = n; 

    int i = 0; 

  

    while(num!=0) { 

        rev = num%10 + rev * 10; 

        num = num/10; 

        i++; 

    } 

  

    return rev; 

  

} 