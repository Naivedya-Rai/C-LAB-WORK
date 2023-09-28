 #include <stdio.h> 

#include <stdlib.h> 

  

#define MAX 10 

  

void convert(int n, int base, char *ans); 

void print_arr(char *arr); 

  

int main() { 

  

    int n; 

    printf("Enter a number: "); 

    scanf("%d",&n); 

     

    char *bin = calloc(MAX, sizeof(char)); 

    char *oct = calloc(MAX, sizeof(char)); 

    char *hex = calloc(MAX, sizeof(char)); 

     

    convert(n, 2, bin); 

    convert(n, 8, oct); 

    convert(n, 16, hex); 

     

    printf("Converting %d:\n",n); 

     

    printf("\tbinary:       "); 

    print_arr(bin); 

     

    printf("\tOctal:        "); 

    print_arr(oct); 

     

    printf("\tHexa-Decimal: "); 

    print_arr(hex); 

  

    return 0; 

} 

  

  

void convert(int n, int base, char *ans) { 

  

    int rem = 0; 

    int i = 1; 

  

    while(n!=0) { 

     

        rem = n%base; 

        if(rem < 10) { 

            ans[MAX-i] = rem; 

  

        }  

        else { 

            ans[MAX-i] = 65+(rem - 10); 

        } 

     

        i++; 

        n /= base; 

     

    } 

  

} 

  

void print_arr(char *arr) { 

  

    for(int i = 0; i<MAX; i++ ) { 

     

        if (arr[i] >= 'A' && arr[i] <= 'F') { 

            printf("%c",arr[i]); 

        } 

        else { 

            printf("%d",arr[i]); 

        } 

     

    } 

    printf("\n"); 

     

} 