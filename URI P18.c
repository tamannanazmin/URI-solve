#include<stdio.h>

int main()
{
    int N,a,b,c,e,g,h,i,j,k,l,m,n,o;
    scanf("%d",&N);

    a = N/100;
    b = N%100;
    c = b/50;
    e = b%50;
    g = e/20;
    h = e%20;
    i = h/10;
    j = h%10;
    k = j/5;
    l = j%5;
    m = l/2;
    n = l%2;
    o = n/1;

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",c);
    printf("%d nota(s) de R$ 20,00\n",g);
    printf("%d nota(s) de R$ 10,00\n",i);
    printf("%d nota(s) de R$ 5,00\n",k);
    printf("%d nota(s) de R$ 2,00\n",m);
    printf("%d nota(s) de R$ 1,00\n",o);

    return 0;
}
