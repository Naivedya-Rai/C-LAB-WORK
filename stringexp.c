#include <stdio.h>
#include <stdlib.h>
 
 
int my_strlen(const char* str);
 
int my_strncmp(const char* str1, const char* str2, int len);
 
int longstr(const char* str1, const char* str2);
 
char* my_strncat(char* dest, const char* src, int len);
 
int str_find(const char* string, int len_str, const char* substr, int len_substr);
 
 
 
 
int main(int argc, char* argv[]) {
 
  if(argc < 3) {
    fprintf(stderr, "USAGE\n%s <str1> <str2>\n",argv[0]);
    exit(1);
  }
 
  // compare 2 strings
  int cmp = my_strncmp(argv[1], argv[2], my_strlen(argv[1]));
 
  if(cmp == 0) {
    printf("%s = %s\n", argv[1], argv[2]);
  }
  else {
    printf("%s != %s\n", argv[1], argv[2]);
  }
 
  // longer
  longstr(argv[1], argv[2]);
 
  char* str_con = (char *) malloc(100 * sizeof(char)); // hardcoded 
 
  // concatinating strings
  //str_con = my_strncat(str_con, "Some string \0", 13);
  str_con = my_strncat(str_con, argv[1], my_strlen(argv[1]));
  str_con = my_strncat(str_con, argv[2], my_strlen(argv[2]));
 
  printf("Concatinated String: %s\n",str_con);
 
  str_find(str_con, my_strlen(str_con), argv[1], my_strlen(argv[1]));
  str_find(str_con, my_strlen(str_con), argv[2], my_strlen(argv[2]));
 
  char* some_random = "some text\0";
  str_find(str_con, my_strlen(str_con), some_random, my_strlen(some_random));
 
  return 0;
}
 
int my_strlen(const char* str) {
 
  int i = 0;
  while(*(str++) != '\0')
    i++;
 
  return i;
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
 
char* my_strncat(char* dest, const char* src, int len) {
 
  int dest_len = my_strlen(dest);
  int i;
 
  for(i = 0; i < len && src[i] != '\0'; i++)
    dest[dest_len+i] = src[i];
 
  dest[dest_len+i] = '\0';
 
  return dest;
}
 
int str_find(const char* string, int len_str, const char* substr, int len_substr) {
 
  int str_i = 0;
 
  int i = 0;
 
  while(str_i < len_str) {
 
    if(string[str_i] == substr[i]) {
 
      for(i = 0; i < len_substr; i++) {
        
        if(i == len_substr-1) {
          printf("Found \"%s\" in \"%s\"\n", substr, string);
          return len_substr;
        }
 
        if(string[str_i + i] != substr[i]) {
          break;
        }
 
      }
 
    }
 
    str_i++;
  }
 
  printf("Did not find \"%s\" in \"%s\"\n", substr, string);
  return i;
 
}
