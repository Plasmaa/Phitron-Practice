#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int ara[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ara[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d",ara[i][j]);
        }
        printf("\n");
    }

    if(row==col)
    {
        int ans=1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i+j==row && i+j==col)
                {
                    continue;
                }
                else if(ara[i][j]!=0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {
            printf("Diagonal\n");
        }
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}
