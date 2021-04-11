#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((24-a)+b<=24)
    {
        printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",abs(a-b));
    return 0;
}

