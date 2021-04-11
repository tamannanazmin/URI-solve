#include<stdio.h>

int main()
{
    int a,x,b,y;
    scanf("%d%d%d%d",&a,&x,&b,&y);
        if((24-a)+b==0 && (60-x)+y==0)
            printf("O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)\n");

    else if((24-a)+b<=24)
    {
        if ((60-x)+y<=60)
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-a)+b,(60-x)+y);
            else if(abs(x-y))
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-a)+b,abs(x-y));

    }
    else
    {
        if ((60-x)+y<=60)
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",abs(a-b),(60-x)+y);
            else if(abs(x-y))
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",abs(a-b),abs(x-y));
    }

    return 0;
}
