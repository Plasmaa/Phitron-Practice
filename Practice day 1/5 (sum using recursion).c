#include <stdio.h>

int sum_to_n(int x);

int main ()
{
    int x;
    scanf("%d",&x);

    printf("%d",sum_to_n(x));

    return 0;
}
int sum_to_n(int x)
{
    if (x==1)
        return 1;
    else
        return sum_to_n(x-1)+x;
}
