#include<stdio.h>

int main()
{
    int n,i,j,s=0,d=0,e,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {


    s=i*i;
    d=i*i*i;
    e=s+1;
    f=d+1;

    printf("%d %d %d\n",i,s,d);
    printf("%d %d %d\n",i,e,f);


    }
    return 0;
}
