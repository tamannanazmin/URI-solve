#include<stdio.h>

int main()
{
    int n,a,b,sum=0,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&a,&b);
         if(a==b)
        {
            sum=0;
            printf("%d\n",sum);
        }
        if(a<b)
    {
         for(i=a+1,sum=0;i<b;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }


    }
    printf("%d\n",sum);
    }
    else if(b<a)
    {
         for(i=b+1,sum=0;i<a;i++)
    {
         if(i%2!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d\n",sum);
    }

    }

   return 0;
}
