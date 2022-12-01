#include <stdio.h>

double area_of_circle(float r)
{
    float area;
    area=3.14159*r*r;

    return area;
}

int main ()
{
    float r;
    scanf("%f",&r);

    printf("%f",area_of_circle(r));

    return 0;
}
