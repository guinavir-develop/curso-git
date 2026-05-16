#include <stdio.h>

int main ()
{
    int limite = 10;

    printf("contamdo numeros pares ate %d:\n", limite);

    for ( int i = 0 ; i <= limite ; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
}