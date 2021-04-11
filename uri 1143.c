#include<stdio.h>

int main()
{
    int n,i,j,s=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {


    s=i*i;
    d=i*i*i;

    printf("%d %d %d",i,s,d);
    printf("\n");

    }
    return 0;
}

