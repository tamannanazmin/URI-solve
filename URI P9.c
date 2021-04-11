#include<stdio.h>

int main()
{
    char n[20];
    float t,m,TOTAL;
    scanf("%s%f%f",&n,&t,&m);
    TOTAL = ((15*m)/100)+t;
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
