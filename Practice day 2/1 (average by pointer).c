#include <stdio.h>

int main ()
{
    float x,y;

    float* a=&x;
    float* b=&y;

    scanf("%f %f",a,b);

    printf("%f",(*a+*b)/2);

    return 0;
}
