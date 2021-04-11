#include<stdio.h>

int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(c<a && c<b)
    {
        max = (a+b+abs(a-b))/2;
    printf("%d eh o maior\n",max);
    }
    else if (b<a && b<c)
    {
        max = (a+c+abs(a-c))/2;
    printf("%d eh o maior\n",max);
    }
    else if(a<b && a<c)
    {
        max = (b+c+abs(b-c))/2;
    printf("%d eh o maior\n",max);
    }
    return 0;
}
