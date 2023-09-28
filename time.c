#include <stdio.h>
#include <stdlib.h>


struct Time
{
    int hours,minutes,seconds;
};

typedef struct Time Time;
int main(){
   
    Time t1,t2,temp;
    printf("enter the times in hours,minutes,seconds");
    scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
   
    printf("enter the times in hours,minutes,seconds");
    scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
   
    temp.hours=t1.hours+t2.hours;
    temp.minutes=t1.minutes+t2.minutes;
    temp.seconds=t1.seconds+t2.seconds;
   
    printf("\n time hours=%d \n time minutes=%d \n time seconds=%d \n",temp.hours,temp.minutes,temp.seconds);
    printf("%d: %d : %d",temp.hours,temp.minutes,temp.seconds);
}