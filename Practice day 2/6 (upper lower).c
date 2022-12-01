#include <stdio.h>
#include <string.h>

void upper_lower(char a[],int x)
{
    for (int i=0; i<x; i++)
    {
        if (a[i]%2==0)
        {
            a[i]+=32;
        }
    }
}

int main ()
{
    char a[100000];
    scanf("%s",&a);

    int len=strlen(a);
    upper_lower(a,len);

//  printf("%d",len);

    char b[100000];

    printf("%s",b);

    return 0;
}
