#include <stdio.h>

void swapp(int* x, int* y);

int main ()
{
    int n;
    scanf("%d",&n);
    int ara[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for (int x=0; x<n; x++)
    {
        for (int i=0; i<n-1; i++)
        {
            if (ara[i]>ara[i+1])
            {
                swapp(&ara[i],&ara[i+1]);
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}

void swapp(int* x, int* y)
{
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
}
