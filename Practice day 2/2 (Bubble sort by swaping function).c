#include <stdio.h>

void swapp(int ara[], int ara[])
{
    int temp;
    temp=ara[x];
    ara[x]=ara[x+1];
    ara[x+1]=temp;
}

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

    return 0;
}
