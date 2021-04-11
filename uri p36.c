#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,R1,R2,R;
    scanf("%lf%lf%lf",&a,&b,&c);
    R =(b*b)-(4*a*c);

    R1 = ((-b)+sqrt(R))/(2*a);

    R2 = ((-b)-sqrt(R))/(2*a);
    if(a!=0 && R>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
