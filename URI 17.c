#include<stdio.h>

int main()
{
    int t,v;
    float h,a;
    scanf("%d%d",&t,&v);
    h = v*t;
    a = h/12;
    printf("%.03f\n",a);
    return 0;
}
