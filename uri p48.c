#include<stdio.h>

int main()
{
    double a,b;
    char ch='%';
    scanf("%lf",&a);
    if(a>=0 && a<=400.00)
    {
        b=a*0.15;
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 15 %c\n",ch);
    }
    else if(a>=400.01 && a<=800.00)
    {
        b=a*0.12;
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 12 %c\n",ch);
    }
    else if(a>=800.01 && a<=1200.00)
    {
        b=a*0.10;
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        b=a*0.07;
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(a>2000.00)
    {
        b=a*0.04;
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 4 %c\n",ch);
    }
    return 0;

}
