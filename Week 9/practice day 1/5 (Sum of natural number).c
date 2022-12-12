#include <stdio.h>

int s(int x)
{
    if (x==1)
        return 1;
    else
        return s(x-1)+x;
}

int main ()
{
    int x;
    scanf("%d",&x);

    printf("%d",s(x));

    return 0;
}

