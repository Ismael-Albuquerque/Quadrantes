#include <stdio.h>

int main ()
{
    float x, y;

    printf("Digite o valor de x:");

    scanf("%f", &x);

    printf("Digite o valor de y:");

    scanf("%f", &y);

    if(x > 0 && y > 0 )
    {
        if (x > 0 && y > 0)
        {
            printf("Q1");
        }

        else
        {
        printf("Q2");
        }

    }

    else
    {
        if (x == 0 && y == 0)
        {
            printf("Origem");
        }
        else if (x == 0)
        {
            printf("Eixo y");
        }
        else if (y == 0)
        {
            printf("Eixo x");
        }
        else if  (x > 0 && y < 0)
        {
            printf("Q4");
        }
        else if ( x < 0 && y > 0)
        {
            printf("Q2");
        }
        else
        {
             printf("Q3");
        }

    }

   return 0;
}
