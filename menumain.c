#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int option;

    while(1) {
        printf("**********MENU**********\n");
        printf("1. Read File\n");
        printf("2. Write File\n");
        printf("3. Copy File\n");
        printf("4. Delete File\n");
        printf("5. Rename File\n");
        printf("6. Exit\n");
        printf("Enter you option: ");
        scanf("%d",&option);


        if (option == 1) {
            printf("");
        }
        else if(option == 2) {
            printf("");
        }
        else if(option == 3) {
            printf("");
        }
        else if(option == 4) {
            printf("");
        }
        else if(option == 5) {
            printf("");
        }
        else if (option == 6) {
            printf("");
            exit(1);
        }
        else {
            printf("Please select a number from 1 to 6");
        }
        
    }

    return 0;

}