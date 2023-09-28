#include <stdio.h>

int main(void)
{
    int i;
    skip:
    printf("***********MENU***********\n");
    printf("1. Read file\n2. Write file\n3. Copy File\n4. Delete File\n5. Rename File\n6. Exit\nEnter your choice: ");
    scanf("%d", &i);
    {
        switch (i)
        {
        case 1:
            printf("");
            goto skip;
        case 2:
            printf("");
            goto skip;
        case 3:
            printf("");
            goto skip;
        case 4:
            printf("");
            goto skip;
        case 5:
            printf("");
            goto skip;
        case 6:
            break;
        default:
            printf("Please input a valid number between 1 and 6!");
        }
    }
    return 0;
}