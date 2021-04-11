#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=(4*i)+1;j<(4*i)+4;j++)
        {
            printf("%d ",j);

        }
        printf("PUM\n");
    }
    return 0;
}

