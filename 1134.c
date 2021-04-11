#include<stdio.h>

int main()
{
    int a,c=0,d=0,e=0;
    while(1)
    {
        scanf("%d",&a);
    if(a==4)
        break;
    else
    {
        if(a==1)
            c++;
        else if(a==2)
            d++;
        else if(a==3)
            e++;
        else
            continue;


    }




    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",c);
    printf("Gasolina: %d\n",d);
    printf("Diesel: %d\n",e);
    return 0;
}
