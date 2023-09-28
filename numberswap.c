#include <stdio.h> 

  

int main() { 

  

  int a = 1; 

  int b = 2; 

  

  printf("Before swapping a:%i b:%i\n",a,b); 

  a = a+b; 

  b = a-b; 

  a = a-b; 

  printf("After swapping a:%i b:%i\n",a,b); 

  

  return 0; 

} 