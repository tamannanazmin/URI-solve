#include<stdio.h>

int main()
{
    int n,x,i,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);

    if(x>=10 && x<=20)
    {
        c++;
    }

    else
    {
        d++;
    }


    }
     printf("%d in\n",c);
      printf("%d out\n",d);
    return 0;
}
