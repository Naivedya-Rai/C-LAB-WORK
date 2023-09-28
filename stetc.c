#include <stdio.h>

struct example
{
    char s[20];
    int x;
    float y;
};

struct example e1;

int main()
{
    e1.s[20]="Navi";
    e1.x=69;
    e1.y=420;
    
    printf("%s\n",e1.s);
    printf("%d\n",e1.x);
    printf("%.2f\n",e1.y);
}