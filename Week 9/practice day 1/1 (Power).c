#include <stdio.h>

int poww(int x,int y)
{
    if (y!=0)
    {
       return (x*poww(x,y-1));
    }
    else
        return 1;
}

int main ()
{
    int x,y,result;
    scanf("%d %d",&x,&y);

    result=poww(x,y);

    printf("%d",result);

    return 0;
}
