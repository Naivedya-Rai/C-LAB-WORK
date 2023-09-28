#include <stdio.h>
#include <stdlib.h>
 
int my_strlen(const char *str);
int total_alpha(const char *str, int len);
int total_vowel(const char *str, int len);
char* my_strncpy(char *dest, char *src, int n);
 
 
int main(int argc, char *argv[]) {
 
  if(argc < 2) {
    fprintf(stderr, "USAGE\n%s <string>\n",argv[0]);
    exit(1);
  }
 
  int len = my_strlen(argv[1]);
  char* s;
  
  s = my_strncpy(s, argv[1], len);
 
  if(s == NULL) {
    fprintf(stderr,"Failed to copy string\n"); 
    exit(1);
  }
 
  printf("Length of %s: %d\n", s, len);
 
  printf("Total No. of Alphabets: %d\n", total_alpha(s, len));
 
  printf("Total No. of vowels: %d\n", total_vowel(s, len));
 
  return 0;
 
} 
 
 
int my_strlen(const char *str) {
 
  int len = 0;
 
  while(*(str++) != '\0')
    len++;
 
  return len;
}
 
char* my_strncpy(char *dest,  char *src, int n) {
 
  dest = (char *)malloc((n+1) * sizeof(char));
 
  int i = 0;
 
  while((*(dest+i) = *(src+i)) != '\0') {
    i++;
  }
 
  *(dest+i+1) = '\0';
  return dest;
 
}
 
int total_alpha(const char *str, int len) {
 
  int alpha = 0;
 
  for(int i = 0; i < len; i++) {
    if((str[i] > 64) && (str[i] < 123) )
      alpha++;
  }
 
  return alpha;
 
}
 
int total_vowel(const char *str, int len) {
 
  int v = 0;
 
  for(int i = 0; i < len; i++) {
    
    if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') ||
        (str[i] == 'o') || (str[i] == 'u') ||
        (str[i] == 'A') || (str[i] == 'E') ||
        (str[i] == 'I') || (str[i] == 'O') ||
        (str[i] == 'U')) {
      v++;
    }
 
  }
 
  return v;
}
