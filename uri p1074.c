#include<stdio.h>

int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            printf("NULL\n");
        }
        if(a%2==0 && a>0)

        {
            printf("EVEN POSITIVE\n");
        }
        if(a%2==0 && a<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(a%2!=0 && a>0)
        {
            printf("ODD POSITIVE\n");
        }
        if(a%2!=0 && a<0)
        {
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
