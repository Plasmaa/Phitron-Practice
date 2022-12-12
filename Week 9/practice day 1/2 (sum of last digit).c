#include <stdio.h>

int sum_of_last_digit(int a[],int n)
{
    if (n<=1)
        return a[0];
    else
        return a[n]+sum_of_last_digit(a,n-1);
}

int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        a[i]=a[i]%10;
    }

    int result;
    result=sum_of_last_digit(a,n);

    printf("%d",result);

    return 0;
}
