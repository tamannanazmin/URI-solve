#include<stdio.h>

int main()
{
    int a,b,i,s=0;
    scanf("%d%d",a,b);

if(a<b)
    {
    for(i=a;i<=b;i++)

        {
            printf("%d",i);
           s=s+i;

        }
    printf("Sum=%d",s);

    }



    return 0;

}
