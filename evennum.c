#include <stdio.h>

int main() {

    int i;
    int arr[6] = {9,8,7,6,5,4};

    int count=0;
    
    for (i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        if (arr[i] % 2 == 0) 
        {
            count++;
        } 
    }

    printf("The count of even elements: %d\n",count);

    return 0;

}