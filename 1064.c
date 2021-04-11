#include<stdio.h>

int main()
{
    float a[6],d,sum=0;
    int i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>=0)
        {
            c++;
            sum=sum+a[i];
        }
    }
    d=sum/c;
    printf("%d valores positivos\n",c);
    printf("%.1f\n",d);
    return 0;
}
