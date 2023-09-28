#include <stdio.h>
#include <stdlib.h>
 
int my_strlen(const char *str);
void count_str(const char* str, int len);
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
 
  count_str(s, len);
 
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
 
void count_str(const char* str, int len) {
 
  int capital, small, digits, special;
 
  capital = small = digits = special = 0;
 
 
  for(int i = 0; i < len; i++) {
 
    if((str[i] > 64) && (str[i] < 92)){
      capital++;
    }
    else if((str[i] > 97) && (str[i] < 123) ) {
      small++;
    }
    else if((str[i] > 47) && (str[i] < 59)) {
      digits++;
    }
    else {
      special++;
    }
  }
 
  printf("Total Numbers\nCapitals: %d\nSmall: %d\nDigits: %d\nSpecial: %d\n",
      capital, small, digits, special);
 
}
 
