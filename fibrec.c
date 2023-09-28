#include <stdio.h>
 
int fibo(int a, int b, int n);
 
int main(void) {
 
  int n;
 
  printf("Enter count: ");
  scanf("%d", &n);
 
  fibo(0, 1, n);
 
 
}
 
int fibo(int a, int b, int n) {
 
  if(a > n) {
    printf("\n");
    return 0;
  }
 
  printf("%d ",a);
 
  return fibo(b, a+b, n);
 
 
}
 
