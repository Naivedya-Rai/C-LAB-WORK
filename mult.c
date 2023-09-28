#include <stdio.h> 

  

int main(void) { 

  

    int n; 

    printf("Enter a number: "); 

    scanf("%d",&n); 

  

    for (int i = 1; i<11;i++) { 

        printf("%dx%d = %d\n",n,i,n*i); 

    } 

    return 0; 

} 