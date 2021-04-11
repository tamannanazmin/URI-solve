#include<stdio.h>

int main()
{
    int n,i;
    float a,b,c,d,e,f,g;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        d=a*2;
        e=b*3;
        f=c*5;
        g=(d+e+f)/10;
        printf("%.1f\n",g);
    }
return 0;
}
