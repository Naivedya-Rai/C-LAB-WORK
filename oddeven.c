#include <stdio.h>
 
int main() {
 
  int n;
 
  printf("Enter a number: ");
  scanf("%d",&n);
 
  (n%2 == 0) ? printf("%i is even\n",n) : printf("%i is odd\n",n);
 
  return 0;
 
}
