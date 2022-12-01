#include <stdio.h>

void n_to_one(int x)
{
    return x-n_to_one;
}

int main ()
{
    int x;
    scanf("%d",&x);

    n_to_one(x);

    return 0;
}
