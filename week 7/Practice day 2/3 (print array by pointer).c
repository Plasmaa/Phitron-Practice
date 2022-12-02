#include <stdio.h>

int main ()
{
    int x;
    scanf("%d",&x);
    int ara[x];

    for (int i=0; i<x; i++)
    {
        scanf("%d",&ara[i]);
    }

    for (int i=0; i<x; i++)
    {
        printf("%d ",*ara+i);
    }

    return 0;
}
