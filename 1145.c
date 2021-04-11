
#include<stdio.h>

int main()
{
    int a,i,j,b,x;
    scanf("%d%d",&a,&b);
    x = b/a;
    for(i = 0;i< x;i++)
    {
        for(j = (a*i)+1;j<= (a*i)+a;j++)
        {
            printf(" %d",j);

        }
        printf("\n");
    }
    return 0;
}
