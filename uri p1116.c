#include<stdio.h>

int main()
{
    int a,b,n,i;
    float s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(b==0)
            printf("divisao impossivel\n");
        else
        {
            s=a/(b*1.00);
            printf("%.1f\n",s);
        }
    }
    return 0;

}
