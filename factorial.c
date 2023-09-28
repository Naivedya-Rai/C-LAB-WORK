#include <stdio.h> 

  

unsigned long int fact(int n); 

  

int main() { 

  

  int n; 

  

  printf("Enter a number: "); 

  scanf("%d",&n); 

  

  printf("Factorial of %d: %lu\n",n,fact(n)); 

  

  return 0; 

  

} 

  

unsigned long int fact(int n) { 

  

  if (n<2) return 0; 

  

  unsigned long int f=1; 

  

  for (int i=1;i<n;i++) {f*=i;} 

  

  return f; 

  

} 