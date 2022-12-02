#include <stdio.h>

void n_to_one(int n)
{
    printf("%d ",n_to_one(1-n_to_one));
}

int main ()
{
    int x;
    scanf("%d",&x);

    n_to_one(x);

    return 0;
}
