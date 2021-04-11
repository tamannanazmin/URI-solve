#include<stdio.h>

int main()
{
    int a[5],i,c=0,d=0,e=0,f=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
        }
        if(a[i]%2!=0)
        {
            d++;
        }
        if(a[i]>0)
        {
            e++;
        }
        if(a[i]<0)
        {
            f++;
        }
    }
    printf("%d valor(es) par(es)\n",c);
    printf("%d valor(es) impar(es)\n",d);
    printf("%d valor(es) positivo(s)\n",e);
    printf("%d valor(es) negativo(s)\n",f);
    return 0;
}
