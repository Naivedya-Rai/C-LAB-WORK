#include <stdio.h> 

  

int main(void) { 

  

    int n = 0; 

  

    printf("Enter a number: "); 

    scanf("%d",&n); 

  

    if (n%5 == 0 && n%11 == 0) { printf("%d: Divisible by 5 and 11\n",n); } 

    else if (n%5 == 0 && n%11 != 0) { printf("%d: Only divisible by 5\n",n); } 

    else if (n%5 != 0 && n%11 == 0) { printf("%d: Only divisible by 11\n",n); } 

    else { printf("%d: is not divisible by 5 and 11\n",n); } 

  

    return 0; 

  

} 