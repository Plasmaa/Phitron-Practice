#include <stdio.h>

void print_to(int n)
{
    if (n>0)
    {
        printf("%d ",n);
        print_to(n-1);
    }
}

int main ()
{
    int n;
    scanf("%d",&n);

    print_to(n);

    return 0;
}
