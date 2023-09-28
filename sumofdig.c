#include <stdio.h>
 
int sigma(int n);
 
int main(void) {
 
  int n;
 
  printf("Enter Number: ");
  scanf("%d", &n);
 
  printf("Sigma(%d): %d\n",n, sigma(n));
 
  return 0;
 
}
 
int sigma(int n) {
 
  if(n < 1)
    return 0;
 
  return n+sigma(n-1);
 
}
