#include<stdio.h>

int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a-1;i>b;i--)
    {
        if(i%2==1 || i%2==-1)
        {
            sum = sum+i;

        }
    }
    printf("%d\n",sum);
    return 0;
}
