#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
 
    if (argc < 2) {
        printf("Usage:\n %s [number of rows]\n",argv[0]);
        exit(1);
    }
 
    int n = atoi(argv[1]);
 
    if (n%2==0) printf("Use a odd number for better triangle\n");
 
    for(int i = 0; i<n; i++) {
 
        int space;
        for (space = 0; space<n-i; space++) {
            printf(" ");
        }
 
        int star;
        for (star = 0; star<(n-space)*2+1; star++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    for(int i = n; i>-1; --i) {
 
        int space;
        int star;
        for(space = 0; space<n-i; space++) {
            printf(" ");
        }
 
        for(star = 0; star<(2*i)+1; star++) {
            printf("*");
        }
 
        printf("\n");
 
    }
 
    return 0;
 
}
