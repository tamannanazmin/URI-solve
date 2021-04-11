#include<stdio.h>

int main()
{
    float a,c,d,e,f,g,b;

    scanf("%f",&a);
    if(a>=0.00 && a<=2000.00)
        printf("Isento\n");
    else if(a>=2000.01 && a<=3000.00)

    {
        b = a-2000.00;
        printf("R$ %.2f\n",b*.08);

    }
    else if(a>=3000.01 && a<=4500.00)
    {
        b = a-2000.00;
        c= b-1000;
        d=b-c;
        e=d*.08;
        f=c*.18;
        g=e+f;

        printf("R$ %.2f",g);
    }
    return 0;
}
