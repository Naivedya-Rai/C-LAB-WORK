#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int hrs;
    int min;
    int sec;
} time;

time* get_time();
void display_time(time* t);
time* time_conversion(time *t);
void additionoftime(time *t1, time *t2);

int main(void)
{

    time* t1,*t2;
    
    printf("Enter time 1:\n");
    t1 = get_time();

    printf("Enter time 2:\n");
    t2 = get_time();
    
    printf("Time 1 is :");
    display_time(t1);

    printf("Time 2 is :");
    display_time(t2);

    printf("Addition of time is :");
    additionoftime(t1, t2);

    return 0;
}

time* get_time() //to get time
{

    time* t = (time *) malloc(sizeof(time));

    printf("Enter Hrs: ");
    scanf("%d", &t->hrs);

    printf("Enter mins: ");
    scanf("%d", &t->min);

    printf("Enter secs: ");
    scanf("%d", &t->sec);

    return t;
}

void display_time(time* t) //to display time
{

    time_conversion(t);
    printf("\n%d:%d:%d\n", t->hrs, t->min, t->sec);


}

time* time_conversion(time *t) //to convert time
{

    if(t->sec > 59) {
        t->min += t->sec / 60;
        t->sec = t->sec % 60; 
    } 

    if(t->min > 59) {
        t->hrs += t->min / 60;
        t->min = t->min %60;
    }

}

void additionoftime(time *t1, time *t2) //to add the two time inputs
{

    time* add = (time *)malloc(sizeof(time));

    add->hrs = t1->hrs + t2->hrs;
    add->min = t1->min + t2->min;
    add->sec = t1->sec + t2->sec;

    time_conversion(add);
    display_time(add);

    free(add);

}
