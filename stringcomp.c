#include <stdio.h>
#include <stdlib.h>
 
int my_strlen(const char* str);
 
char* rev_str(char *dest, const char* src, int len);
 
int palindrome(const char* str, int len);
 
int my_strncmp(const char* str1, const char* str2, int len);
 
int longstr(const char* str1, const char* str2);
 
 
 
 
int main(int argc, char* argv[]) {
 
  if(argc < 3) {
    fprintf(stderr, "USAGE\n%s <string1> <string2>\n", argv[0]);
    exit(1);
  }
 
 
  char* rev1 = NULL;
  rev1 = rev_str(rev1, argv[1], my_strlen(argv[1]));
 
  printf("Reverse of %s: %s\n", argv[1], rev1);
 
  palindrome(argv[1], my_strlen(argv[1]));
 
  longstr(argv[1], argv[2]);
 
  return 0;
 
}
 
int my_strlen(const char* str) {
 
  int i = 0;
  while(*(str++) != '\0')
    i++;
 
  return i;
}
 
 
char* rev_str(char *dest, const char* src, int len) {
 
  dest = (char *)malloc(len * sizeof(char));
 
  int i = 0;
 
  while((dest[i] = src[len-i-1]) != '\0')
    i++;
 
  return dest;
}
 
int my_strncmp(const char* str1, const char* str2, int len) {
 
  int c;
 
  for(int i = 0; i < len; i++) {
    c = str1[i] - str2[i]; 
 
    if(c != 0){
      return c;
    }
  }
  
  return 0;
 
}
 
int palindrome(const char* str, int len) {
 
  char* rev = NULL;
  rev = rev_str(rev, str, len);
 
  if(my_strncmp(str, rev, len) != 0) {
    fprintf(stderr, "%s is not a palindrome\n", str); 
    return 1;
  }
  else{
    printf("%s is a palindrome\n", str);
    return 0;
  }
 
  return -1;
}
 
int longstr(const char* str1, const char* str2) {
 
  int len1 = my_strlen(str1);
  int len2 = my_strlen(str2);
 
  if(len1 > len2) {
    printf("length of %s > %s\n", str1, str2);
  }
  else if (len1 < len2) {
    printf("length of %s < %s\n", str1, str2);
  }
  else {
    printf("length of %s = %s\n", str1, str2);
  }
 
  return 0;

}
