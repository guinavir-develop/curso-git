#include <stdio.h>

int main()
{
    int limite = 10;

    printf("contando numeros ate o limite informado %d:\n", limite);

    for ( int i = 0 ; i <= limite ; i++)
    {
        printf("> %d\n",i);
    }
}