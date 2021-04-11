#include<stdio.h>

int main()
{
    int a,b,i,s=0;
    while(1)
    {
      scanf("%d%d",&a,&b);
      if(a<=0 || b<=0)
            break;
      else
      {
       s=0;
       if(a>b)
       {
           for(i=b;i<=a;i++)
            {
                printf("%d ",i);
                s+=i;
            }
            printf("Sum=%d\n",s);

       }
       else if(a<b)
       {
           for(i=a;i<=b;i++)
            {
                printf("%d ",i);
                s+=i;
            }
            printf("Sum=%d\n",s);
       }

      }

    }




    return 0;

}
