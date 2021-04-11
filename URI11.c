#include<stdio.h>

int main()
{
    float r;
    double pi = 3.14159,VOLUME;
    scanf("%f",&r);
    VOLUME = (4.0/3)*pi*(r*r*r);
    printf("VOLUME = %.3f\n",VOLUME);
    return 0;
}
