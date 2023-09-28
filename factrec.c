#include <stdio.h> 

  

int fact(int n); 

  

  

int main(void) { 

  

  int n; 

  

  printf("Enter number: "); 

  scanf("%d",&n); 

  

  printf("Fact of %d: %d\n", n, fact(n)); 

  

  return 0; 

  

} 

  

int fact(int n) { 

  

  if(n < 2)  

    return 1; 

  

  return n*fact(n-1); 

} 