
#include<stdio.h>
int main()

{
    int num, temp, digit, sum=0; //declared variables
    printf("Enter number to check for Armstrong :\n");
    scanf("%d",&num);
    temp = num;//storing num in another variable
    
    while(temp!=0)//condition to end loop
    
    {   
        digit = temp%10;
        temp = temp/10;
        sum+=digit*digit*digit;//cube of digits
    }
  if (sum == num) //check if sum and num is equal
        printf("%d is an Armstrong number:", num);//print result
    else
        printf("%d is not an Armstrong number:", num);//print result
    return 0;
}