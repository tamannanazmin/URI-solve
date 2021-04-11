#include<stdio.h>

int main()
{
    int a[100],i,c,max;
    max=a[0];
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>max)
        {
            max=a[i];
            c=i+1;

        }

    }
    printf("%d\n",max);
    printf("%d\n",c);
    return 0;
}
