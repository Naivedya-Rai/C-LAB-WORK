#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

  

int main(int argc, char* argv[]) { 

  

  if(argc < 3) { 

    fprintf(stderr, "USAGE\n%s <string1> <string2>\n", argv[0]); 

    exit(1); 

  } 

  

  char* str = strdup(argv[1]); 

  

  char *str_sort = strdup(argv[2]); 

  

  char temp; 

  int i, j; 

  

  int n = strlen(str); 

  

  // sort str 

  

  for (i = 0; i < n-1; i++) { 

    for (j = i+1; j < n; j++) { 

      if (str[i] > str[j]) { 

        temp = str[i]; 

        str[i] = str[j]; 

        str[j] = temp; 

      } 

    } 

  } 

  

  // sort str_sort 

  for (i = 0; i < n-1; i++) { 

    for (j = i+1; j < n; j++) { 

      if (str_sort[i] > str_sort[j]) { 

        temp = str_sort[i]; 

        str_sort[i] = str_sort[j]; 

        str_sort[j] = temp; 

      } 

    } 

  } 

  

  if(strncmp(str, str_sort, strlen(str)) == 0) { 

    printf("Anagram\n"); 

  } 

  else { 

    printf("Not an Anagram\n"); 

  } 

  

  return 0; 

  

} 