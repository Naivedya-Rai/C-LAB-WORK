#include <stdio.h>
 
int isprime(int n);
 
int main() {
 
  int n;
 
  printf("Enter a number: ");
  scanf("%d",&n);
 
  if ( isprime(n) == 1) {
    printf("%i is prime\n",n);
  }
  else if ( isprime(n) == -1){
    printf("%i is composite\n",n);
  }
  else {
    printf("Enter a number greater than 2\n");
  }
 
  return 0;
 
}
 
int isprime(int n) {
  if (n<2) { return 0; }
  for (int i=2;i<n;i++) if (n%i==0) return -1;
  return 1;
}
