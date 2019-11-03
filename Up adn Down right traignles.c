#include<stdio.h>
int main()
{
    int i, j,k;
    //FIRST
    for (i=1;i<11;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    //SECOND
    for (i=10;i>1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //THIRD
    for (i=10;i>1;i--)
    {

        for(j=1;j<i;j++)
        {
            printf("*");

        }
        printf("\n");
        for(k=11;k>i;k--)
        {
             printf(" ");
        }
    }
     printf("\n");
     //FOURTH
       for (i=1;i<11;i++)
    {
         for(k=10;k>i;k--)
{
       printf(" ");
}



            for(j=0;j<i;j++)
        {
            printf("*");
        }


        printf("\n");



}
}
