#include <stdio.h>

int sum_of_array(int ara[],int n)
{
    int sum=0;

    for (int i=0; i<n; i++)
    {
        if (ara[i]%10==0)
        {
            sum=sum+ara[i];
        }
    }
    return sum;
}

int main ()
{
    int x;
    scanf("%d",&x);
    int ara[x];

    for (int i=0; i<x; i++)
    {
        scanf("%d",&ara[i]);
    }

    int sum;
    sum=sum_of_array(ara,x);

    printf("%d",sum);

    return 0;
}
