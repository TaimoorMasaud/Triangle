#include<stdio.h>
void uptriangle();
void downtriangle();
void rectangle();
int main()
{
   uptriangle();
   rectangle();
   printf("\n\n");
   rectangle();
   downtriangle();
}
void uptriangle()
{
    printf("\n    *  ");
    printf("\n   * *  ");
    printf("\n  * * * ");
    printf("\n * * * * ");
}
void downtriangle()
{
    printf("\n * * * * ");
    printf("\n  * * * ");
    printf("\n   * *  ");
    printf("\n    *  ");
}
void rectangle()
{
    printf("\n -------");
    printf("\n -------");
    printf("\n -------");
    printf("\n -------");
}
