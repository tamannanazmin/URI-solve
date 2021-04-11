#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
             s=pow(i,2);
        printf("%d^2 = %d\n",i,s);
        }


    }
    return 0;
}
