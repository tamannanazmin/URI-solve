#include<stdio.h>

int main()
{
    int N,x,b,a,c,d;
    scanf("%d",&N);
    a = N/3600;
    b = N%3600;
    c = b/60;
    d = b%60;
    printf("%d:%d:%d\n",a,c,d);
    return 0;

}
