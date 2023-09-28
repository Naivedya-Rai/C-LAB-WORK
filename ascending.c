#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define LEN 20
 
int main(void) {
 
  char* inp = NULL;
 
  inp = (char *)malloc(LEN * sizeof(char));
 
  printf("Enter string: ");
  inp = fgets(inp, LEN, stdin);
 
  printf("Input: %s\n",inp);
 
  char temp;
  
  int len = strlen(inp);
  for(int i = 0; i < len; i++) {
    for(int j = i+1; j < len; j++) {
      if(inp[i] > inp[j]) {
        temp = inp[i]; 
        inp[i] = inp[j];
        inp[j] = temp;
      }
    }
  }
 
  printf("Sorted: %s\n",inp);
 
  return 0;
 
}
