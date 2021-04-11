#include<stdio.h>

int main()
{
    float ar[6];
    int i,c=0;
    for(i=0;i<6;i++)
    {
      scanf("%f",&ar[i]);
       if(ar[i]>=0)
        c++;
    }


        printf("%d valores positivos\n",c);
        return 0;
}
