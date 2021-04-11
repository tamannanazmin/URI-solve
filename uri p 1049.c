#include<stdio.h>
#include<string.h>

int main()
{
    char ch[15],bh[15],eh[15];
    scanf("%s%s%s",ch,bh,eh);
    if(ch[0]=='v')
    {
        if(bh[0]=='a')
        {
            if(eh[0]=='c')
            {
               printf("aguia\n");

            }

            else if(eh[0]=='o')
            {
                 printf("pomba\n");
            }

        }
        else if(bh[0]=='m')
        {
             if(eh[0]=='o')
             {
                 printf("homem\n");
             }

            else if(eh[0]=='h')
            {
                printf("vaca\n");
            }

        }
    }
    else if(ch[0]=='i')
    {
        if(bh[0]=='i')
        {
            if(eh[0]=='h')
            {
               printf("pulga\n");
            }

            else if(eh[0]=='h')
            {
                printf("lagarta\n");
            }

        }

        else if(bh[0]=='a')
        {
             if(eh[0]=='h')
             {
                 printf("sanguessuga\n");
             }

            else if(eh[0]=='o')
            {
                printf("minhoca\n");
            }

        }
    }
    return 0;
}
