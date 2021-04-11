#include<stdio.h>

int main()
{
int term1,interval,numberofterms,sum,lastterm;

printf("enter the first term:");
scanf("%d",&term1);
printf("enter the interval:");
scanf("%d",&interval);
printf("enter the number of terms");
scanf("%d",&numberofterms);
lastterm=term1+(numberofterms-1)*interval;
sum=((term1 +lastterm)*numberofterms)/2;
printf("the sum is %d.",sum);
return 0;
}
