#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void Capital(char* str, int len);
void small(char* str, int len);
void sentence_case(char* str, int len);
 
 
int main(int argc, char* argv[]) {
 
  if(argc < 2) {
    fprintf(stderr,"USAGE\n%s <string>\n",argv[0]);
    exit(1);
  }
 
  int len = strlen(argv[1]);
 
  printf("Normal String: %s\n",argv[1]);
 
  Capital(argv[1], len);
  small(argv[1], len);
  sentence_case(argv[1], len);
 
  return 0;
 
}
 
void Capital(char* str, int len) {
 
  char* s = malloc(len);
  s = strncpy(s, str, len);

  for(int i = 0; i < len; i++) {
    
    if((*(s+i) > 96) && (*(s+i) < 123)) {
      *(s+i) -= 32;
    }
  }
 
  printf("Capital String: %s\n",s);
 
}
 
void small(char* str, int len) {
 
  char* s = malloc(len);
  s = strncpy(s, str, len);

 
  for(int i = 0; i < len; i++) {
    
    if((*(s+i) > 64) && (*(s+i) < 91)) {
      *(s+i) += 32;
    }
  }
 
  printf("small String: %s\n",s);
 
}
 
void sentence_case(char* str, int len) {
 
  char* s = malloc(len);
  s = strncpy(s, str, len);
 
  if((*s > 96) && (*s < 123))
    *s -= 32;
 
  for(int i = 0; i < len-1; i++) {
    
    if((*(s+i) == ' ') && (*(s+i+1) != '\0') && ((s+i+1) != NULL)) {
  
      if((*(s+i+1) > 96) && (*(s+i+1) < 123)) {
        *(s+i+1) -= 32;
      }
 
    }
 
  }
 
  printf("Sentence Case: %s\n", s);
}
 
