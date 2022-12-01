#include <stdio.h>

int count(int ara[],int n)
{
    int i,ans=0,k;
    scanf("%d",&k);
    for (i=0; i<n; i++)
    {
        if (ara[i]>k || ara[i]<k)
            ans++;
    }
    return ans;
}

int main ()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];

    for (i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    printf("%d",count(ara,n));

    return 0;
}
