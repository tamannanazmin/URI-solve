#include<stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("perimetro = %0.1f\n",(a+b+c));
    }
    else
    {
        printf("Area = %0.1f\n",(c*((a+b)/2)));
    }
    return 0;
}

