#include <stdio.h>

void sort(int ara[],int n);
int kth_largest(int ara[],int n,int k);
int kth_smallest(int ara[],int n,int k);

int main ()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int k;
    scanf("%d",&k);
    sort(ara,n);

    int lar,sm;
    lar=kth_largest(ara,n,k);
    sm=kth_smallest(ara,n,k);

    printf("k-th largest element=%d\n",lar);
    printf("k-th smallest element=%d\n",sm);

    return 0;
}

int kth_smallest(int ara[],int n,int k)
{
    int ans;
    ans=ara[k-1];

    return ans;
}

int kth_largest(int ara[],int n,int k)
{
    int ans;
    ans=ara[n-k];

    return ans;
}

void sort(int ara[],int n)
{
    int temp;
    for (int x=0; x<n; x++)
    {
        for (int i=0; i<n-1; i++)
        {
            if (ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
    }
    return ara;
}

