#include <stdio.h>
 
int fibo(int n);
 
int main() {
 
  int n = 0;
 
  printf("Enter the number of Fibonacci numbers required: ");
  scanf("%d",&n);
 
  fibo(n);
 
  printf("\n");
  return 0;
 
}
 
int fibo(int n) {
 
  int a = 0;
  int b = 1;
 
  for (int i=0; i<n; i++) {
    printf("%d ",a);
    int temp = a;
    a = b;
    b = temp+a;
  }
 
  return 0;
 
}
