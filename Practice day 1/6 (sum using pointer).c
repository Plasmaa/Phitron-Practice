#include <stdio.h>

int sum_of_three(int* x,int* y,int* z)
{
    int sum;
    sum= *x+*y+*z;
    return sum;
}

int main ()
{
    int a,b,c;
    scanf("%d",&a,&b,&c);

    int sum,*p,*q,*r;
    *p=&a;
    *q=&b;
    *r=&c;
    sum=sum_of_three(&a,&b,&c);

    printf("%d",sum);

    return 0;
}
